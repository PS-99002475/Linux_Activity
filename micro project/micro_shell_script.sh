#!/bin/bash
Report="./Results.csv"
printf "name,email,git-url,status-clone,status-build,cppcheck,valgrind
" > $Report


while IFS=, read -r Name EmailId REPO; do
    [[ $Name != 'Name' ]] && printf "$Name," >> $Report 
    [[ $EmailId != 'Email ID' ]] && printf "$EmailId," >> $Report
    if [ "$REPO" != 'Repo link' ]; then
        printf "$REPO," >> $Report
        
        git clone "$REPO"
        [[ $? == 0 ]] && printf "Clone-Success," >> $Report
        [[ $? > 0 ]] && printf "Clone-failed," >> $Report
        
        REPO=`echo "$REPO" | cut -d'/' -f5`
        MAKE_DIR=`find "$REPO" -name "Makefile" -exec dirname {} \;`
        make -C "$MAKE_DIR"
        [[ $? == 0 ]] && printf "build-Success," >> $Report
        [[ $? > 0 ]] && printf "build-failed," >> $Report
        
        ERRORS=`cppcheck "$MAKE_DIR" | grep 'error' | wc -l`
        printf "$ERRORS," >> $Report
        make test -C "$MAKE_DIR"
        
        EXE=`find "$MAKE_DIR" -name "Test*.out"`
        valgrind "./$EXE" 2> valgrinderr.csv
        VALGRINDERR=`grep "ERROR SUMMARY" valgrinderr.csv`
        printf "${VALGRINDERR:24:1} \n" >> $Report
        
    fi
done < Input.csv

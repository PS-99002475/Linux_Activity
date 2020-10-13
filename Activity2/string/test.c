#include <stdarg.h>
#include <stdio.h>
#include "mystring.h"
int main() {
 int length; 
char p[100] = "programming ", q[100] = "is awesome";
mystrcat(p, q);
printf("String obtained on concatenation: \"%s\"\n", p);

printf("\nString comparison:");
mystrcmp("abc","defg");


 
length = mystrlen(p);
printf("\nLength of the String 'programming' is : %d", length);

char m[100] = "programming", n[100];
    mystrcpy(m, n); // function call
    printf("\n\nThe copied string is: %s\n\n", n);
   
return 0;
}

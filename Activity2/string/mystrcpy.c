#include "mystring.h"
void mystrcpy(char a[], char b[]) // function definition
{
    int i = 0;
    while(a[i] != '\0')
    {
        b[i] = a[i];
        i++;
    }

    
    b[i] =' \0';    
}

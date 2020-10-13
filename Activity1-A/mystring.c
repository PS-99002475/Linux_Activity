#include "mystring.h"

void mystrcat(char p[], char q[]) {
   int c, d;
   
   c = 0;
 
   while (p[c] != '\0') {
      c++;      
   }
 
   d = 0;
 
   while (q[d] != '\0') {
      p[c] = q[d];
      d++;
      c++;    
   }
 
   p[c] = '\0';
}

void mystrcmp(char str1[100], char str2[100])
{
    int i = 0;
   while (str1[i] == str2[i] && str1[i] != '\0')
      i++;
   if (str1[i] > str2[i])
      printf("str1 > str2\n");
   else if (str1[i] < str2[i])
      printf("str1 < str2\n");
   else
      printf("str1 = str2\n");
}

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

int mystrlen(char str[100]) {
   int len = 0;
   while (str[len] != '\0')
      len++;
   return (len);
}


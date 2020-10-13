#include "mystring.h"
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

#include "myutils.h"
#include <stdarg.h>
 int factorial(int n)
{
   int c;
   int result = 1;
 
   for( c = 1 ; c <= n ; c++ )
         result = result*c;
 
   return ( result );
}
int isPalindrome(int number)
 {
   int temp, remainder, sum=0;

   temp = number;

   while( number!=0 )
   {
       remainder = number % 10;
       sum = sum*10 + remainder;
       number /= 10;
   }

   if ( sum == temp ) return 0;

   else return 1;
 }
int isPrime(int a)
{
   int c;
 
   for ( c = 2 ; c <= a - 1 ; c++ )
   { 
      if ( a%c == 0 )
     return 0;
   }
   return 1;
}

int vsum(int num,...) {

   va_list valist;
   int sum = 0;
   int i;

   /* initialize valist for num number of arguments */
   va_start(valist, num);

   /* access all the arguments assigned to valist */
   for (i = 0; i < num; i++) {
      sum += va_arg(valist, int);
   }
	
   /* clean memory reserved for valist */
   va_end(valist);

   return sum;
}

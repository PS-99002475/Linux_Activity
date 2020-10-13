#include "myutils.h"
 int factorial(int n)
{
   int c;
   int result = 1;
 
   for( c = 1 ; c <= n ; c++ )
         result = result*c;
 
   return ( result );
}

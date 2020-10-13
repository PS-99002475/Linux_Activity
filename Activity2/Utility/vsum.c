#include "myutils.h"
#include <stdarg.h>
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



#include "bitmask.h"
#include <stdarg.h>
#include <stdio.h>
int main() {
  int n,k;
  n = 10;
  k = 20;
    printf("%d with %d-th bit Set: %d\n",
           n, k, set(n, k));
    printf("%d with %d-th bit Reset: %d\n",
           n, k, reset(n, k));
    printf("%d with %d-th bit Toggled: %d\n",
           n, k, flip(n, k));
 
  
   return 0; 
  
}

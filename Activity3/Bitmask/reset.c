// Function to clear the kth bit of n
#include "bitmask.h"
int reset(int n, int k)
{
    return (n & (~(1 << (k - 1))));
} 

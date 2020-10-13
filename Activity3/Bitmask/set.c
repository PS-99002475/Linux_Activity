// Function to set the kth bit of n
#include "bitmask.h"
int set(int n, int k)
{
    return (n | (1 << (k - 1)));
} 

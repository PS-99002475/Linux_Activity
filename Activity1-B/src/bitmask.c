// Function to toggle the kth bit of n
#include "bitmask.h"
int flip(int n, int k)
{
    return (n ^ (1 << (k - 1)));
} 
int reset(int n, int k)
{
    return (n & (~(1 << (k - 1))));
} 

int set(int n, int k)
{
    return (n | (1 << (k - 1)));
} 

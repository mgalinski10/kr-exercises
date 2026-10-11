#include <stdio.h>
#include <limits.h>

/*
Exercise 2-8. Write a function rightrot(x,n) that returns the value of the integer x rotated
to the right by n positions
*/

unsigned rightrot(unsigned x, int n);

int main() 
{
    printf("%x\n", rightrot(0x12345678, 4));
    printf("%x\n", rightrot(0x12345678, 8));
    printf("%x\n", rightrot(1, 1));
    return 0;
}

unsigned rightrot(unsigned x, int n)
{
    unsigned mask = ~(~0 << n);
    unsigned low = x & mask;

    return (x >> n) | (low << (sizeof(x) * CHAR_BIT - n));
}
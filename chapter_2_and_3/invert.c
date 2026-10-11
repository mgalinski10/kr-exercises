#include <stdio.h>

/*
Exercise 2-7. Write a function invert(x,p,n) that returns x with the n bits that begin at
position p inverted (i.e., 1 changed into 0 and vice versa), leaving the others unchanged.
*/
unsigned int invert(unsigned int x, int position, int n);

int main() 
{
    unsigned int result = invert(240, 5, 2); // should beeee 192

    printf("Result is %u\n", result);
    return 0;
}

/*
    7654 3210 -> index
x = 0001 1001
position = 4
n = 3

wanted 110 inverted: 001 so result should be 000|0 01|01

XOR 0 always keeps a bit UNCHANGED. 0 XOR 0 is 0 and 1 XOR 0 is 1
*/
unsigned int invert(unsigned int x, int position, int n)
{
    return x ^ (~(~0 << n) << (position + 1 - n));
}
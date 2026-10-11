#include <stdio.h>
#include <limits.h>
#include <float.h>

enum months {JAN, FEB, MAR, APR}; // values are following: 0, 1, 2, 3

int main() 
{
    double pi = 3.14;
    float number = 1.11;

    double a = 0.1 + 0.2;
    double b = 0.3;

    printf("%f\n", pi);
    printf("%f\n", number);

    if (a == b) 
    {
        printf("Will never be printed.\n");
    }
    else 
    {
        printf("They are approximations: a = %.17f, b = %.17f\n", a, b);
    }

    printf("signed char: %d to %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("unsigned char: 0 to %u\n", UCHAR_MAX);
    printf("signed short: %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("unsigned short: 0 to %u\n", USHRT_MAX);
    printf("signed int: %d to %d\n", INT_MIN, INT_MAX);
    printf("unsigned int: 0 to %u\n", UINT_MAX);
    printf("signed long: %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("unsigned long: 0 to %lu\n", ULONG_MAX);

    return 0;
}
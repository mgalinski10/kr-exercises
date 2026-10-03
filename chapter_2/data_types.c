#include <stdio.h>

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

    return 0;
}
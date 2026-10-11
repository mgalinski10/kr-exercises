#include <stdio.h>

/*
Exercise 3-1. Our binary search makes two tests inside the loop, when one would suffice (at
the price of more tests outside.) Write a version with only one test inside the loop and measure
the difference in run-time.
*/

int binsearch(int x, int l[], int n);

int main() 
{
    // [1, 2, 3, 4, 5, 6]
    int numbers[20];
    for (int i = 0; i < 20; ++i) 
    {
        numbers[i] = i;
    }

    int result = binsearch(3, numbers, 20);

    printf("Result: %d\n", result);

    return 0;
}
// x = 3
// low = 3
// mid = 3
// high = 3
// 0 1 2 3 4 5 6 7 8 9 10
int binsearch(int x, int l[], int n)
{
    int low, high, mid;

    low = 0;
    high = n - 1;
    while (low < high) {
        mid = (high + low) / 2;
        printf("low = %d, mid = %d, high = %d\n", low, mid, high);
        if (x > l[mid])
        {
            low = mid + 1;
        }
        else 
        {
            high = mid;
        }
    }

    return x == l[low] ? low : -1; /* no match */
}
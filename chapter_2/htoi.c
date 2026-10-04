#include <stdio.h>
/*
Exercise 2-3. Write a function htoi(s), which converts a string of hexadecimal digits
(including an optional 0x or 0X) into its equivalent integer value. The allowable digits are 0
through 9, a through f, and A through F
*/

int htoi(char s[]);

int main()
{
    char hex[] = "10";
    int result = htoi(hex);
    printf("Converted from %s to %d\n", hex, result);

    return 0;
}

int htoi(char s[])
{
    int i, result;
    result = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9' || s[i] >= 'a' && s[i] <= 'f'; i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
            result = 16 * result + (s[i] - '0');
        else
            result = 16 * result + (10 + (s[i] - 'a'));
    }

    return result;
}

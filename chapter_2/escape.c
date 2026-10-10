#include <stdio.h>
#define LENGTH 50

/*
Exercise 3-2. Write a function escape(s,t) that converts characters like newline and tab into
visible escape sequences like \n and \t as it copies the string t to s. Use a switch. Write a
function for the other direction as well, converting escape sequences into the real characters.
*/

void escape(char s[], char c[]);

int main()
{
    char s[2 * LENGTH];   /* why 2 * LENGTH? think about the worst case */

    char t1[] = "hello";
    char t2[] = "a\tb";
    char t3[] = "line1\nline2";
    char t4[] = "\t\n";
    char t5[] = "";

    escape(t1, s);
    printf("[%s]  expected: [hello]\n", s);

    escape(t2, s);
    printf("[%s]  expected: [a\\tb]\n", s);

    escape(t3, s);
    printf("[%s]  expected: [line1\\nline2]\n", s);

    escape(t4, s);
    printf("[%s]  expected: [\\t\\n]\n", s);

    escape(t5, s);
    printf("[%s]  expected: []\n", s);

    return 0;
}

void escape(char s[], char c[])
{
    int current;
    int i = 0;
    for (int j = 0; j < LENGTH; ++j, ++i) 
    {
        current = s[j];
        switch (current)
        {
            case '\n':
                c[i] = ('\\');
                c[i + 1] = ('\\');
                c[i + 2] = ('n');
                break;
            case '\t':
                c[i] = ('\\');
                c[i + 1] = ('\\');
                c[i + 2] = ('t');
                break;
            default: 
                c[i] = current;
        }
    }


}
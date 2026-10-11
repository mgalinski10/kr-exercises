    #include <stdio.h>

    #define TRUE 1
    #define FALSE 0

    /*
    Exercise 4-1. Write the function strindex(s,t) which returns the position of the rightmost
    occurrence of t in s, or -1 if there is none.
    */

    int strindex(char pattern[], char haystack[]);
    int compare(char pattern[], char suspect[], int start_index);

    int main()
    {
        printf("Test 1: %d (expected 6)\n", strindex("ab", "abcabcab"));

        printf("Test 2: %d (expected -1)\n", strindex("xyz", "hello"));

        printf("Test 3: %d (expected 2)\n", strindex("abc", "xxabcab"));

        return 0;
    }

    int compare(char pattern[], char suspect[], int start_index)
    {
        int pattern_index, suspect_index;
        int is_equal = TRUE;
        
        pattern_index = 0;
        
        for (suspect_index = start_index; pattern[pattern_index] != '\0'; ++suspect_index, ++pattern_index)
        {
            if (pattern[pattern_index] != suspect[suspect_index])
            {
                is_equal = FALSE;
                break;
            }
        }
        
        return is_equal;
    }

    int strindex(char pattern[], char haystack[])
    {
        int haystack_index, result, is_there;
        
        is_there = FALSE;
        result = -1;
        for (haystack_index = 0; haystack[haystack_index] != '\0'; ++haystack_index)
        {
            if (haystack[haystack_index] == pattern[0])
            {
                is_there = compare(pattern, haystack, haystack_index);

                if (is_there)
                {
                    result = haystack_index;
                }
            }
        }

        return result;
    }


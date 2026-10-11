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
        return 0;
    }

    int compare(char pattern[], char suspect[], int start_index)
    {
        /*
        int pattern_index, suspect_index;
        int is_equal = TRUE

        pattern_index = 0;
        suspect_index = start_index

        Iterate (by using for loop) through suspect starts from suspect[start_index]:
            - check if pattern[pattern_index] == '\b':
                if yes: return is_equal
            - check if pattern[pattern_index] == suspect[suspect_index]:
                - if true: continue and increase indexes by one. 
                - if not: set is_equal to FALSE and break.
        */
    return 0;
    }

    int strindex(char pattern[], char haystack[])
    {
        /*
        If haystack or pattern are empty, return -1
        Iterate through haystack:
            - check if haystack[haystach_index] is not '\0':
                - if yes: return result, it is end of the string.
            - check if haystack[haystack_index] equals pattern[0]:
                - If yes: save haystack_index to temp variable and call function compare(char a[], char b[], haystack_index) 
                - if no: continue and go to the next haystack's character.
        */
    return 0;
    }


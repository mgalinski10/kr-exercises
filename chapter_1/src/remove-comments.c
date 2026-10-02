/*
    Does not handle quote characters inside char constants or esaped quotes in strings.
*/

#include <stdio.h>

#define IN 1
#define OUT 0


int current_character, next_character, quotes_state, temp_character;

int main() 
{    
    while ((current_character = getchar()) != EOF)
    {
        if (current_character == '/' && quotes_state == OUT) 
        {
            next_character = getchar();

            if (next_character == '/') 
            {   
                while ((temp_character = getchar()) != EOF)
                {
                    if (temp_character == '\n')
                    {
                        putchar('\n');
                        break;
                    }
                }   
            }

            else if (next_character == '*')
            {
                while ((temp_character = getchar()) != EOF)
                {
                    if (temp_character == '*')
                    {
                        next_character = getchar();

                        if (next_character == '/')
                        {
                            break;
                        }

                        ungetc(next_character, stdin);
                    }
                }
            }

            else 
            {
                putchar(current_character);
                ungetc(next_character, stdin);
            }
        }
        else {
            if (current_character == '"')
            {
                if (quotes_state == IN)
                {
                    quotes_state = OUT;
                }
                else 
                {
                    quotes_state = IN;
                }
            }

            putchar(current_character);
        }
    }

    return 0;
}
/* 
Quote characters inside char constants ('"') and escaped quotes inside strings ("\"") are not handled.
*/

#include <stdio.h>

#define IN 1
#define OUT 0

void skip_line_comment();
void skip_block_comment();

int main() 
{    
    int current_character, next_character;
    int double_quotes = OUT;

    while ((current_character = getchar()) != EOF)
    {
        if (current_character == '/' && double_quotes == OUT) 
        {
            next_character = getchar();

            if (next_character == '/') 
            {   
                skip_line_comment();
            }

            else if (next_character == '*')
            {

                skip_block_comment();
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
                double_quotes = (double_quotes == OUT) ? IN : OUT;
            }

            putchar(current_character);
        }
    }

    return 0;
}

void skip_line_comment()
{
    int character;
    while ((character = getchar()) != EOF)
    {
        if (character == '\n')
        {
            putchar('\n');
            break;
        }
    }   
}

void skip_block_comment() 
{
    int character, next;
    while ((character = getchar()) != EOF)
    {
        if (character == '*')
        {
            next = getchar();

            if (next == '/')
            {
                break;
            }

            ungetc(next, stdin);
        }
    }
}
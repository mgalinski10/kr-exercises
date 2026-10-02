#include <stdio.h>

void skip_line_comment();
void skip_block_comment();
void copy_quoted(int quote);

int main() 
{    
    int current_character, next_character;

    while ((current_character = getchar()) != EOF)
    {
        if (current_character == '/') 
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
        else if (current_character == '"' || current_character == '\'')
        {
            copy_quoted(current_character);
        }
        else {
            putchar(current_character);
        }
    }

    return 0;
}

void copy_quoted(int quote) {
    int character;

    putchar(quote);
    while ((character = getchar()) != EOF)
    {
        putchar(character);

        if (character == '\\')
        {
            if ((character = getchar()) == EOF)
            {
                break;
            }
            putchar(character);
        }
        else if (character == quote) {
            break;
        }
    }
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
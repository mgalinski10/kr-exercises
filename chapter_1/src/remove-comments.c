#include <stdio.h>

int current_character, next_character, is_inside_comment, temp_character;

int main() 
{    
    while ((current_character = getchar()) != EOF)
    {
        if (current_character == '/') 
        {
            next_character = getchar();

            if (next_character == '/') 
            {   
                while ((temp_character = getchar()) != EOF)
                {
                    if (temp_character == '\n')
                    {
                        temp_character = '\0';
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
                            temp_character = '\0'; // i don't know if it's neccessary
                            break;
                        }

                        ungetc(next_character, stdin);
                        break;
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
            putchar(current_character);
        }
    }

    return 0;
}
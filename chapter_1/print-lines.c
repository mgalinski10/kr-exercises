#include <stdio.h>

#define THRESHOLD 80
#define BUFFER_LENGTH 5000

int main()
{
    int character, counter;
    char buffer[BUFFER_LENGTH];

    counter = 0;
    while ((character = getchar()) != EOF)
    {
        if (character == '\n')
        {
            if (counter > THRESHOLD) 
            {
                buffer[counter] = '\0';
                printf("Line is longer than %d: %s\n\n", THRESHOLD, buffer);
            }

            counter = 0;
        }

        else if (counter < BUFFER_LENGTH - 1) 
        {
            buffer[counter] = character;
            counter++;
        }
    }

    buffer[counter] = '\0';
    if (counter > THRESHOLD) 
    {
        printf("Line is longer than %d: %s\n", THRESHOLD, buffer);
    }
    return 0;       
}
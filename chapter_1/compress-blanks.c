#include <stdio.h>

int main() 
{
	int character;
	char prev;
	prev = '\0';
	while ((character = getchar()) != EOF)
	{
		if (prev != ' ') 
		{
			putchar(prev);
			putchar(character);
		}

		prev = character;
	}
	return 0; 
}

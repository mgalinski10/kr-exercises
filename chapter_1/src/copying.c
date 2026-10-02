#include <stdio.h>

int main()
{
	int c;
	while((c = getchar()) != EOF)
	{
		putchar(c);
	}

	int value = getchar() != EOF;
	printf("expression verification: %d\n", value);
	printf("EOF value: %d\n", EOF);

	return 0;
}


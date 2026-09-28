#include <stdio.h>

int main() 
{
	int blanks, tabs, newLines, c; 

	tabs = 0;
	newLines = 0;
	blanks = 0;
	while ((c = getchar()) != EOF)
	{
		if (c == '\t')
		{
			tabs++;
		}

		if (c == '\n')
	       	{
			newLines++;
		}

		if (c == ' ') 
		{
			blanks++;
		}

		printf("tabs: %d, newLines: %d, blanks: %d\n", tabs, newLines, blanks);
	}

	return 0;
}

#include <stdio.h>

#define MAX 10
#define IN 1
#define OUT 0

int main()
{
	int counter, state, i, j, c;
	int histogram[MAX];

	for (i = 0; i < MAX; ++i)
	{
		histogram[i] = 0;
	}

	state = OUT;
	counter = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t')
		{
			if (state == IN)
			{
				if (counter >= MAX - 1) 
					++histogram[MAX - 1];
				else 
					++histogram[counter - 1];
			}

			state = OUT;
			counter = 0;
			continue;
		}

		state = IN;
		++counter;
	}

	for (j = 0; j < MAX; ++j)
	{
		if (j + 1 == MAX)
			printf(" greater: %d\n", histogram[j]);
		else 
			printf("length %d: %d\n", j + 1, histogram[j]);
	}
	
	return 0;
}

#include <stdio.h>

#define UPPER 300.0
#define LOWER 0
#define STEP 20


int main() 
{
	printf("%10s %10s\n", "CELSIUS", "FAHRENHEIT");
	for (double celsius = UPPER; celsius >= LOWER; celsius = celsius - STEP)
	{
		double fahr = celsius * (9.0 / 5.0) + 32.0;
		printf("%10.0f %10.2f\n", celsius, fahr);
	}

	return 0;
}

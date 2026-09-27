#include <stdio.h>

int main() 
{
	printf("%10s %10s\n", "CELSIUS", "FAHRENHEIT");
	for (double celsius = 300.0; celsius >= 0; celsius = celsius - 20)
	{
		double fahr = celsius * (9.0 / 5.0) + 32.0;
		printf("%10.0f %10.2f\n", celsius, fahr);
	}

	return 0;
}

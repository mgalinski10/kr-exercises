#include <stdio.h>

int main() 
{
	float fahr, celsius;
	float lower, upper, step;

	lower = 0; /* lower limit of temperature scale */
	upper = 300; /* upper limit */
	step = 20; /* step size */

	printf("%10s %10s\n", "CELSIUS", "FEHRENHEIT");
	fahr = lower;
	while (celsius <= upper) {
		fahr = celsius * (9.0 / 5.0) + 32.0;
		printf("%10.0f %10.2f\n", celsius, fahr);
		celsius = celsius + step;
	}

	return 0;
}

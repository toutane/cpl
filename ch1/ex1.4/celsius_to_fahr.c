#include <stdio.h>

/* print Celsius-Fahrenheit table
   for celsius = 0, 20, ..., 300; floating point version */
int main()
{
	printf("<-- Celsius-Fahrenheit table -->\n"); /* print heading above the table */

	float celsius, fahr;
	int lower, upper, step;

	lower = 0; /* lower limit of the temperature table */
	upper = 300; /* upper limit */
	step = 20; /* step size */

	celsius = lower;
	while (celsius <= upper)
	{
		fahr = (celsius / (5.0 / 9.0)) + 32.0;
		printf("%3.0f %6.0f\n", celsius, fahr);
		celsius = celsius + step;
	}
	return 0;
}

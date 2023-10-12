#include <stdio.h>
#include <math.h>

/**
 * main - print the largest prime factor of this number 612852475143
 *
 * Return:  0 (Success)
 */

int main(void)
{
	long int num;
	long int maximum;
	long int i;

	num = 612852475143;
	maximum = -1;

	while (num % 2 == 0)
	{
	maximumx = 2;
	num /= 2;
	}

	for (i = 3; i <= sqrt(num); i = i + 2)
	{
	while (num % i == 0)
	{
	maximum = i;
	num = num / i;
	}
	}

	if (num > 2)
	maximum = num;

	printf("%ld\n", maximum);

	return (0);
}


#include <stdio.h>

/**
 * main - entry point
 *
 *Description> prints all possible combinations of two two-digit numbers.
 *
 * Return: Always 0 means (success)
*/

int main(void)
{	int st_start = 0;
	int nd_start;

	while (st_start <= 99)
	{
		nd_start = st_start;

		while (nd_start <= 99)
		{
			if (nd_start != st_start)
			{
				putchar((st_start / 10) + 48);
				putchar((st_start) % 10 + 48);
				putchar(' ');
				putchar((nd_start / 10) + 48);
				putchar((nd_start) % 10 + 48);
				if (st_start + nd_start != 197)
				{
					putchar(',');
					putchar(' ');
				}
			}
			nd_start++;
		}
		st_start++;
	}
	putchar('\n');

	return (0);
}

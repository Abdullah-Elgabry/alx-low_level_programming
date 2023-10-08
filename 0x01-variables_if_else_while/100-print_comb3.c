#include <stdio.h>

/**
 * main - entry point
 *
 *Description> prints all possible different combinations of two digits.
 *
 * Return: Always 0 means (success)
*/

int main(void)
{	int st_start = 0;
	int nd_start;

	while (st_start <= 9)
	{
		nd_start = 0;

		while (nd_start <= 9)
		{
			if (st_start != nd_start && st_start < nd_start)
			{
				putchar(st_start + 48);
				putchar(nd_start + 48);

				if (st_start + nd_start != 17)
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

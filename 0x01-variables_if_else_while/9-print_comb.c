#include <stdio.h>

/**
 * main - entry point
 *
 *Description > prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 means (success)
*/

int main(void)
{	int start = 0;

	while (start <= 9)
	{
		putchar(start + 48);
		if (start != 9)
		{
			putchar(',');
			putchar(' ');
		}
		start++;
	}
	putchar('\n');

	return (0);
}

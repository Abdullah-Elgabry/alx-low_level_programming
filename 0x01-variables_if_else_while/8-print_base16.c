#include <stdio.h>

/**
 * main - entry point
 *
 *Description > print alphapet in lowercase
 *
 * Return: Always 0 means (success)
*/

int main(void)
{	int start = 48;

	while (start <= 102)
	{
		putchar(start);
		if (start == 57)
			start += 39;
		start++;
	}
	putchar('\n');

	return (0);
}

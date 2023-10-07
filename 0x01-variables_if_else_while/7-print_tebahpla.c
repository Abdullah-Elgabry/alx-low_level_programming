#include <stdio.h>

/**
 * main - entry point
 *
 *Description > print alphapet in lowercase
 *
 * Return: Always 0 means (success)
*/

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{	putchar(c);
		c--;
	}
	putchar('\n');

	return (0);
}

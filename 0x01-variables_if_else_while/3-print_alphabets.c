#include <stdio.h>

/**
 * main - entry point
 *
 *Description > print char in lower and upper case
 *
 * Return: Always 0 means (success)
*/

int main(void)
{
	char c = 'a';
	char C = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	while (c <= 'Z')
	{
		putchar(C);
		C++
	}
	putchar('\n');
	return (0);
}

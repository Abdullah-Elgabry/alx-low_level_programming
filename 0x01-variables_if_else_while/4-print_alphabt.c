#include <stdio.h>

/**
 * main - entry point
 *
 *Description > print alphapet in lowercase but skip e & q
 *
 * Return: Always 0 means (success)
*/

int main(void)
{	char c = 'a';
	while (c <= 'z')
	{
		if (c == 'e' || c == 'q')
			c++;
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}

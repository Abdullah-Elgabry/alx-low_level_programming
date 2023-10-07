#include <stdio.h>

/**
 * main - entry point
 *
 * Description > prints single digit numbers of base 10 starting from 0 by char
 *
 * Return: Always 0 means (success)
*/

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num + '0');
		num++;
	}
	printf("\n");
	return (0);
}

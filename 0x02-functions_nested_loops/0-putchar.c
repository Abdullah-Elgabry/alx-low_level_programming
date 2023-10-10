#include"main.h"

/**
 * main - entry point
 *
 * Description: a c program that prints _putchar
 *
 * Return: 0 means (success)
*/

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(str[ch]);
	_putchar('\n');

	return (0);
}

#include "main.h"

/**
 * print_alphabet_x10 - Write a function that prints 10 times the alphabet.
 *
*/

void print_alphabet_x10(void)
{
	int ch, st;

	for (st = 0; st <= 9; st++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
	_putchar('\n');
	}
}

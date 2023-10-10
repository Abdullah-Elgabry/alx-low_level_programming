#include "main.h"
/**
 * print_alphabet - Write a function that prints 10 times the alphabet.
*/

void print_alphabet(void)
{
	int ch, st;

	for (st = 0; st <= 9; st++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
	_putchar('\n');
	}
}

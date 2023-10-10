#include "main.h"
/**
 * main - entry point
 *
 * Description: fun prints the alphabet, in lowercase, followed by a new line
 *
 * Return: Always 0 means (success)
*/

void print_alphabet(void);
{	
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
	return (0);
}


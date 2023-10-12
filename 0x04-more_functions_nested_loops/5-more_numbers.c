#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: 0 means success
*/

void more_numbers(void)
{
	int number, lines, calc;

	for (lines = 0; lines <= 9; lines++)
	{
		for (calc = 0; calc <= 14; calc++)
		{
			number  = calc;
			if (calc > 9)
			{
				_putchar(1 + 48);
				number  = calc % 10;
			}
			_putchar(number + 48);

		}
		_putchar('\n');
	}

}

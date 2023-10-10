#include "main.h"
/**
 * times_table - this program will print 9 table
*/

void times_table(void)
{
	int number, muliply, product;

	for (number = 0; number <= 9; number++)
	{
		_putchar(48)
		for (muliply = 1; muliply <= 9; muliply++)
		{
			_putchar(',');
			_putchar(' ');


			product = num * muliply

			if (product <= 9)
				_putchar(' ');
			else
				_putchar((product / 10) + 48);
			_putchar((product % 10) + 48);
		}
		_putchar('\n');

	}

}

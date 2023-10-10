#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
*/

void jack_bauer(void)
{
	int ch, cl;

	for (ch = 0; ch <= 23; ch++)
	{
		for (cl = 0; cl <= 59; cl++)
		{
			_putchar((ch / 10) + 48);
			_putchar((ch % 10) + 48);
			_putchar((':'));
			_putchar((min / 10) + 48);
			_putchar((min % 10) + 48);
			_putchar(('\n'));
		}

	}

}

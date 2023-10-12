#include "main.h"

/**
 * print_numbers -fun prints numbers from 0-9
 *
 * Return: 0 means success
*/

void print_numbers(void)
{
	int i = 0;
	
	for (int i = 0; i < 10; i++)
       	{
   		 putchar('0' + i);
	}
	_putchar('\n');
}

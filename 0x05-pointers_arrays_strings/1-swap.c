#include <stdio.h>
/**
 * swap_int -  swaps the values of two integers
 *
 * @a : input 1
 * @b : input 2
 *
 * Return: nothing
*/

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

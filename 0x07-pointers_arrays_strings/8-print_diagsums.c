#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - this is a fun that prints the sum of the two diagonals
 *
 * @a: array will be given
 *
 * @size: this is the size of array
 *
 * Return: this is a void fun
*/

void print_diagsums(int *a, int size);
{
	int i, dx = 0, dy = 0;

	for (i = 0; i < size; i++)
	{
		dx += a[i];
		dy += a[size - i - 1];
		a += size;
	}
	printf("%d, ", dx);
	printf("%d\n", dy);
}

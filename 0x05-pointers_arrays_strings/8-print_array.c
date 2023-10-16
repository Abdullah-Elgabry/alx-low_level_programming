#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 *
 * @a: this is the string input
 * @n: thihs is the  parameter input
 *
 * Return:  Always 0
*/

void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		if (c != (n - 1))
		{
			printf("%d, ", a[i]);
		}
		else
			printf("%d", a[i]);
	}
	printf("\n");
}

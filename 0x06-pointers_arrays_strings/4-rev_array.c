#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 *
 * @a: this is a ptr to a destination
 *
 * @n: most n bytes from src
 *
 * Return: void
*/

void reverse_array(int *a, int n)
{
	int start, len, temp;

	for (start = 0, len = (n - 1); start < len; start++, len--)
	{
		temp = a[start];
		a[start] = a[len];
		a[len] = temp;
	}
}

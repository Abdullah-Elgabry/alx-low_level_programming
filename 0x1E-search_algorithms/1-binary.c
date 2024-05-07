#include "search_algos.h"

/**
  * binary_search - function to find the binary.
  *
  * @array: 1st element ptr
  *
  * @size: [size]
  *
  * @value: the target value
  *
  * Return: -1 || index
  */

int binary_search(int *array, size_t size, int value)
{
	int  L, R, M;

	if (array == NULL)
		return (-1);
	L = 0;
	R = size - 1;
	while (L <= R)
	{
		print_array(array, L, R);
		M = (L + R) / 2;
		if (array[M] > value)
			R = M - 1;
		else if (array[M] < value)
			L = M + 1;
		else
			return (M);
	}
	return (-1);
}

/**
  * print_array - this function to print[].
  *
  * @array: the contianer
  *
  * @L:start point
  *
  * @R:end point
  */

void print_array(int *array, int L, int R)
{
	int x;

	printf("Searching in array: ");
	for (x = L; x < R; x++)
		printf("%d, ", array[x]);
	printf("%d\n", array[x]);
}

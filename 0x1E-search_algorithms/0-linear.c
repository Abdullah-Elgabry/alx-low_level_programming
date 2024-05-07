#include "search_algos.h"

/**
  * linear_search - init searcher func.
  *
  * @array: 1st element ptr
  *
  * @size: [size]
  *
  * @value: the target value
  *
  * Return: -1 || index
  */

int linear_search(int *array, size_t size, int value)
{
	unsigned int x;

	if (array == NULL)
		return (-1);
	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%d] = [%d]\n", x, array[x]);
		if (array[x] == value)
			return (x);
	}
	return (-1);
}

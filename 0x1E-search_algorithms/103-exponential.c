#include "search_algos.h"

/**
  * _binary_search - searcher function with binary_search algo
  *
  * @array: 1st ele ptr
  *
  * @left: start point.
  *
  * @right: end point.
  *
  * @value: targeted value
  *
  * Return: index val or -1.
  *
  */

int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}

/**
  * exponential_search - searcher function with exponential search algo.
  *
  * @array: 1st element.
  *
  * @size: [size].
  *
  * @value: targeted val.
  *
  * Return: -1 on failure || 1st element val
  */

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	right = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
	return (_binary_search(array, i / 2, right, value));
}

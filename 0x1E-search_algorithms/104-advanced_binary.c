#include "search_algos.h"

/**
  * advanced_binary_recursive - searcher function with ad_binary_recursive algo
  *
  * @array: 1st element ptr.
  *
  * @left: start point.
  * @right: end point.
  * @value: targeted val.
  *
  * Return: index val or -1.
  *
  */

int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (advanced_binary_recursive(array, left, i, value));
	return (advanced_binary_recursive(array, i + 1, right, value));
}

/**
  * advanced_binary - searcher function with advanced binary algo
  *
  * @array: 1st element as a start point.
  *
  * @size: [size].
  *
  * @value: targeted val.
  *
  * Return: index val or -1.
  */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}

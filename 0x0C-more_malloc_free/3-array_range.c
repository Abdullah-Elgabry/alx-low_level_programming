#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers.
 *
 * @min: min val
 *
 * @max: max val
 *
 * Return: pointer to the arr OR NULL.
 *
 */

int *array_range(int min, int max)
{
	int *cont;
	int j;

	if (min > max)
		return (NULL);

	cont = malloc(sizeof(*cont) * ((max - min) + 1));

	if (cont == NULL)
		return (NULL);

	for (j = 0; min <= max; j++, min++)
		cont[j] = min;

	return (cont);
}

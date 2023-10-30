#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid -  function that returns a pointer to a 2
 *
 * dimensional array of integers
 *
 * @width: array width.
 *
 * @height: array height.
 *
 * Return: 2 dimensional arr
 *
 */
int **alloc_grid(int width, int height)
{
	int **m;
	int h, w;

	if (width <= 0 || height <= 0)
		return (NULL);

	m = malloc(sizeof(int *) * height);

	if (m == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		m[h] = malloc(sizeof(int) * width);

		if (m[h] == NULL)
		{
			for (; h >= 0; h--)
				free(m[h]);

			free(m);
			return (NULL);
		}
	}

	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
			m[h][w] = 0;
	}

	return (m);
}

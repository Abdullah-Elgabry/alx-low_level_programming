#include "search_algos.h"
#include <math.h>

/**
 * minimum_value - this will search for the min val
 *
 * @a: 1st elemnt.
 *
 * @b: 2nd element.
 *
 * Return: 1st element if they are the same
 * or: the min val
 */

size_t minimum_value(size_t a, size_t b)
{
	if (b < a)
		return (b);
	return (a);
}


/**
 * jump_search - return the [] with jump_search algo.
 *
 * @array: 1st element ptr.
 * @size: [num of val]
 * @value: the targeted val
 *
 * Return: -1 on failure
 * or 1st element
 */

int jump_search(int *array, size_t size, int value)
{
	size_t l, r, jump;
	int val;

	if (array != NULL && size > 0)
	{
		jump = sqrt(size);
		l = 0;
		r = jump;
		val = array[l];
		printf("Value checked array[%lu] = [%d]\n", l, val);
		while (r < size && val < value)
		{
			if (array[r] >= value)
				break;
			l += jump;
			r += jump;
			val = array[l];
			printf("Value checked array[%lu] = [%d]\n", l, val);
		}
		if (l >= size || val > value)
			return (-1);
		printf("Value found between indexes [%lu] and [%lu]\n", l, r);
		while (l <= minimum_value(size - 1, r) && val <= value)
		{
			val = array[l];
			printf("Value checked array[%lu] = [%d]\n", l, val);
			if (val == value)
				return (l);
			l++;
		}
	}
	return (-1);
}

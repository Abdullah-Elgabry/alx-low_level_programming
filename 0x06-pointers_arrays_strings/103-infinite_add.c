#include "main.h"


/**
 * infinite_add - a function that adds two numbers.
 * @n1: first number to add
 * @n2: second number to add
 * @r: the result
 * @size_r: buffer size
 * Return: the sum of inputs
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int f = 0, i = 0, j = 0, d = 0;
	int input1 = 0, input2 = 0, temp = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || f == 1)
	{
		if (i < 0)
			input1 = 0;
		else
			input1 = *(n1 + i) - '0';
		if (j < 0)
			input2 = 0;
		else
			input2 = *(n2 + j) - '0';
		temp = input1 + input2 + f;
		if (temp >= 10)
			f = 1;
		else
			f = 0;
		if (d >= (size_r - 1))
			return (0);
		*(r + d) = (temp % 10) + '0';
		d++;
		j--;
		i--;
	}
	if (d == size_r)
		return (0);
	*(r + d) = '\0';
	rev_string(r);
	return (r);
}

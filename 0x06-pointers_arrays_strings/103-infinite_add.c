#include "main.h"

/**
 *infinite_add - add two numbers.
 *
 *@n1: 1st number.
 *@n2: 2nd number.
 *@r: result.
 *@size_r: result length.
 *Return: sum of n1 + n2.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int plus = 0, input1, input2, i, j;

	for (input1 = 0; n1[input1]; input1++)
	;
	for (input2 = 0; n2[input2]; input2++)
	;
	if (input1 > size_r || input2 > size_r)
		return (0);
	input1--;
	input2--;
	size_r--;
	for (i = 0; i < size_r; i++, input1--, input2--)
	{
		if (input1 >= 0)
			plus += n1[input1] - '0';
		if (input2 >= 0)
			plus += n2[input2] - '0';
		if (input1 < 0 && input2 < 0 && plus == 0)
			break;
		r[i] = plus % 10 + '0';
		plus /= 10;
	}
	r[i] = '\0';
	if (input1 >= 0 || input2 >= 0 || plus)
		return (0);
	for (i--, j = 0; i > j; i--, j++)
	{
		plus = r[i];
		r[i] = r[j];
		r[j] = plus;
	}
	return (r);
}

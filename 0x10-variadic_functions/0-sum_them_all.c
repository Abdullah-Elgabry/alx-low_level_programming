#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: num of par
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list L;
	unsigned int st, result = 0;

	if (n == 0)
		return (0);

	va_start(L, n);

	for (st = 0; st < n; st++)
		result += va_arg(L, int);

	va_end(L);
	return (result);
}

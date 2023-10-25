#include "main.h"

/**
 * factorial - fun that returns the factorial of a given number.
 *
 * @n: this is the checker int
 *
 * Return: the factorial number of given num
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}

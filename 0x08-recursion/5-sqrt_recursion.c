#include "main.h"


/**
 * _get_square - return the square root
 *
 * @n: the given num
 * @sqr: search for the sqr of possible root
 * Return: int
 */
int _get_square(int sqr, int n)
{
	if (sqr < 0)
		return (-1);
	else if (sqr == 1)
		return (1);
	else if (n > sqr / 2)
		return (-1);
	else if (sqr != n * n)
		return (_get_square(sqr, n + 1));
	else if (sqr == n * n)
		return (n);
	return (-1);
}


/**
 * _sqrt_recursion - fun that returns the natural square root of a number.
 *
 * @n: the checker
 *
 * Return: the square root or -1 if is no root
 */

int _sqrt_recursion(int n)
{
	return (_get_square(n, 0));
}

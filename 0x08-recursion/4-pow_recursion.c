#include "main.h"


/**
 * _pow_recursion - fun that returns the value of x raised to the power of y
 *
 * @x: this is the value of the base
 * @y: this is the value of the power
 * Return: 0 is success or -1 if y < 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}

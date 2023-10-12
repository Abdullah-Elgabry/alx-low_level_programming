#include "main.h"

/**
 * _isdigit - c program checks if num between 0-9 or not
 *
 * @num: input for check the num input
 *
 * Return: 1 if it's in upper case , 0 if lower case
*/

int _isdigit(int num)
{
	if (num >= 48 && num <= 57)
		return (1);
	else
		return (0);
}

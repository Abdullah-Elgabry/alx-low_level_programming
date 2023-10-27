#include "main.h"

/**
 * _isupper - c program checks if char upper or lower
 *
 * @chr: input for check the char input
 *
 * Return: 1 if it's in upper case , 0 if lower case
*/

int _isupper(int chr)
{
	if (chr >= 65 && chr <= 90)
		return (1);
	else
		return (0);
}

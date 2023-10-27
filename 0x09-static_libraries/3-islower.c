#include "main.h"

/**
 * _islower -  this fun check for lowercase
 *
 * @ch: input of fun
 *
 * Return: On success 1 else print 0 success
*/

int _islower(int ch)
{
	if (ch >= 97 && ch <= 122)
		return (1);
	return (0);
}

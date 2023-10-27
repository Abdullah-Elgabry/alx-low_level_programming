#include "main.h"

/**
 * _isalpha  -  this fun check for lowercase or uppercase
 *
 * @ch: input of fun
 *
 * Return: On success 1 else print 0 success
*/

int _isalpha(int ch)
{
	if (ch >= 97 && ch <= 122)
		return (1);
	if (ch >= 65 && ch <= 90)
		return (1);
	return (0);
}

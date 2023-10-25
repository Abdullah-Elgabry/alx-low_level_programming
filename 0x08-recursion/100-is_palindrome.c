#include "main.h"


/**
 * _cmp - this fun will compare between s and p
 *
 * @s: the 1st  str
 * @p: the last str
 * Return: 0 or 1
 */
int _cmp(char *s, char *p)
{
	if (*s == '\0')
		return (1);
	if (*s == *p)
		return (_cmp(++s, --p));
	else
		return (0);
}


/**
 * _rev - fun will reverse the string
 *
 * @s: checker ptr
 *
 * Return: reversed str
 *
 */


char _rev(char *s)
{
	if (*s != '\0')
		return (_rev(++s));
	else
		return (--s);
}
/**
 * is_palindrome - fun that returns 1 if a str is a palindrome and 0 if not
 *
 * @s: checker ptr
 *
 * Return: 1 if is palindrome 0 if is not
 */


int is_palindrome(char *s)
{
	char *p;

	p = _rev(s);
	return (_cmp(s, p));
}

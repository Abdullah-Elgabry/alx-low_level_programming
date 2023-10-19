#include "main.h"
#include <stdio.h>

/**
 * lower - function check if the char is lower
 *
 * @c: char
 *
 * Return: 0 or 1
*/


int lower(char c)
{
	return (c >= 97 && c <= 122);
}



/**
 * separators - fun that checks the delimeters in text
 *
 * @c: char
 *
 * Return: 0 or 1
*/

int separators(char c)
{
	int check;
	char separators[] = " \t\n,.!?\"(){}";

	for (check = 0; check < 12; check++)
		if (c == separators[check])
			return (1);

	return (0);
}

/**
 * cap_string - fun that capitalizes all words of a string.
 *
 * @str: char input
 *
 * Return: 0 or 1
*/


char *cap_string(char *str)
{
	char *p = str;
	int sep = 1;

	while (*str)
	{
		if (separators(*str))
			sep = 1;
		else if (lower(*str) && sep)
		{
			*str -= 32;
			sep = 0;
		}
		else
			sep = 0;
		str++;
	}
	return (p);
}

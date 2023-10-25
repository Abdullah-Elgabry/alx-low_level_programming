#include "main.h"
#include <stdio.h>


/**
* wildcmp - function that compares two strings and returns 1
*
* @s1: 1st string
*
* @s2: 2nd string
*
* Return: 1 if identical otherwise 0
*/

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else if (*s2 == '\0')
	{
		return (0);
	}
	else if (*s1 == '\0' && *s2 != '*')
	{
		return (0);
	}
	else if (*s1 == '\0' && *s2 == '*')
	{
		return (wildcmp(s1, s2 + 1));
	}
	else if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}
	else
	{
		return (0);
	}
}

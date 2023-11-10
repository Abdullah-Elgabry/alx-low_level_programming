#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - a function that prints anything.
 *
 * @format: l of arg.
 *
 * Return: always zero.
 */

void print_all(const char * const format, ...)
{
	va_list valist;
	int n = 0, i = 0;
	char *term = ", ";
	char *newl;

	va_start(valist, format);

	while (format && format[i])
		i++;

	while (format && format[n])
	{
		if (n  == (i - 1))
		{
			term = "";
		}
		switch (format[n])
		{
		case 'c':
			printf("%c%s", va_arg(valist, int), term);
			break;
		case 'i':
			printf("%d%s", va_arg(valist, int), term);
			break;
		case 'f':
			printf("%f%s", va_arg(valist, double), term);
			break;
		case 's':
			newl = va_arg(valist, char *);
			if (newl == NULL)
				newl = "(nil)";
			printf("%s%s", newl, term);
			break;
		}
		n++;
	}
	printf("\n");
	va_end(valist);
}

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
	int n = 0, q = 0;
	char *sep = ", ";
	char *newl;

	va_start(valist, format);

	while (format && format[q])
		q++;

	while (format && format[n])
	{
		if (n  == (q - 1))
		{
			sep = "";
		}
		switch (format[n])
		{
		case 'c':
			printf("%c%s", va_arg(valist, int), sep);
			break;
		case 'q':
			printf("%d%s", va_arg(valist, int), sep);
			break;
		case 'f':
			printf("%f%s", va_arg(valist, double), sep);
			break;
		case 's':
			newl = va_arg(valist, char *);
			if (newl == NULL)
				newl = "(nil)";
			printf("%s%s", newl, sep);
			break;
		}
		n++;
	}
	printf("\n");
	va_end(valist);
}

#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - a function that prints anything.
 *
 * @format: lst of arg.
 *
 * Return: always zero.
 */

void print_all(const char * const format, ...)
{
	va_list valist;
	int n = 0, q = 0;
	char *term = ", ";
	char *s;

	va_start(valist, format);

	while (format && format[q])
		q++;

	while (format && format[n])
	{
		if (n  == (q - 1))
		{
			term = "";
		}
		switch (format[n])
		{
		case 'c':
			printf("%c%s", va_arg(valist, int), term);
			break;
		case 'q':
			printf("%d%s", va_arg(valist, int), term);
			break;
		case 'f':
			printf("%f%s", va_arg(valist, double), term);
			break;
		case 's':
			s = va_arg(valist, char *);
			if (s == NULL)
				s = "(nil)";
			printf("%s%s", s, term);
			break;
		}
		n++;
	}
	printf("\n");
	va_end(valist);
}

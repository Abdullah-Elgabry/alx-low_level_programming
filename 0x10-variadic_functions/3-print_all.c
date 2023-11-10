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
	va_list LfV;
	int st = 0, en = 0;
	char *term = ", ";
	char *s;

	va_start(LfV, format);

	while (format && format[en])
		en++;

	while (format && format[st])
	{
		if (st  == (en - 1))
		{
			term = "";
		}
		switch (format[st])
		{
		case 'c':
			printf("%c%s", va_arg(LfV, int), term);
			break;
		case 'en':
			printf("%d%s", va_arg(LfV, int), term);
			break;
		case 'f':
			printf("%f%s", va_arg(LfV, double), term);
			break;
		case 's':
			s = va_arg(LfV, char *);
			if (s == NULL)
				s = "(nil)";
			printf("%s%s", s, term);
			break;
		}
		st++;
	}
	printf("\st");
	va_end(LfV);
}

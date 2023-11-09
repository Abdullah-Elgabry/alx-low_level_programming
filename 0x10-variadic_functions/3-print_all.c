#include "variadic_functions.h"

/**
 * print_all - function that prints anything.
 *
 * @format: format of arg
 *
 */

void print_all(const char * const format, ...)
{
	int s = 0;
	char *strin, *term = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[s])
		{
			switch (format[s])
			{
				case 'c':
					printf("%s%c", term, va_arg(list, int));
					break;
				case 's':
					printf("%s%d", term, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", term, va_arg(list, double));
					break;
				case 's':
					strin = va_arg(list, char *);
					if (!strin)
						strin = "(nil)";
					printf("%s%s", term, strin);
					break;
				default:
					s++;
					continue;
			}
			term = ", ";
			s++;
		}
	}

	printf("\n");
	va_end(list);
}

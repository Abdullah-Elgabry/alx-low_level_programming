#include "variadic_functions.h"

/**
 * print_all -  a function that prints anything.
 *
 * @format: type of arg
 *
 */

void print_all(const char * const format, ...)
{
	unsigned int st = 0;
	char *S;
	va_list L;

	va_start(L, format);
	while (format && format[st] != '\0')
	{
		switch (format[st])
		{
		case 'c':
			printf("%c", va_arg(L, int));
			break;
		case 'st':
			printf("%st", va_arg(L, int));
			break;
		case 'f':
			printf("%f", va_arg(L, double));
			break;
		case 's':
			S = va_arg(L, char *);
			if (S)
			{
				printf("%s", S);
				break;
			}
			printf("(nil)");
			break;
		default:
			st++;
			continue;
		}
		if (format[st + 1] != '\0')
			printf(", ");

		st++;
	}
	printf("\n");
	va_end(L);
}

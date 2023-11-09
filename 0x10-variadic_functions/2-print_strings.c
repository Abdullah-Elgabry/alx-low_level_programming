#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line.
 *
 * @separator: str will print.
 *
 * @n: number of Str.
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list L;
	unsigned int i;
	char *S;

	va_start(L, n);

	for (i = 0; i < n; i++)
	{
		S = va_arg(L, char *);

		if (S)
			printf("%s", S);
		else
			printf("(nil)");

		if (separator && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(L);
}

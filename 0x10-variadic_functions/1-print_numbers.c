#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: str will print
 * @n: numcof int
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list L;
	unsigned int st;

	va_start(L, n);

	for (st = 0; st < n; st++)
	{
		printf("%d", va_arg(L, int));
		if (separator && st < (n - 1))
			printf("%s", separator);
	}

	printf("\n");
	va_end(L);
}

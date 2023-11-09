#include "variadic_functions.h"

/**
 * print_all - a function that prints anything.
 *
 * @F: type of arg
 *
 */

void print_all(const char * const F, ...)
{
	unsigned int st = 0;
	char *S;
	va_list L;

	va_start(L, F);
	while (F && F[st] != '\0')
	{
		switch (F[st])
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
		if (F[st + 1] != '\0')
			printf(", ");

		st++;
	}
	printf("\n");
	va_end(L);
}

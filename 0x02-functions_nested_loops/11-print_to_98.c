#include "main.h"
/**
 * print_to_98 - c program print all n num to > 98
 *
 * @nutral: input
 *
*/

void print_to_98(int nutral)
{
	int c;

	if (nutral > 98)
		for (c = nutral; c > 98; c--)
			printf("%d, ",  c);
	else
		for (c = nutral; c < 98; c++)
			printf("%d, " c);
	printf("98\n");
}

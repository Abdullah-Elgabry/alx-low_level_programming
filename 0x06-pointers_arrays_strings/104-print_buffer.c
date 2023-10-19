#include "main.h"
#include <stdio.h>



/**
*print_buffer - function that prints a buffer
*@b: string
*@size: size of buffer.
*Return: nothing
*/

void print_buffer(char *b, int size)
{
	int i, j, m;

	if (size <= 0)
		printf("\n");
	else
	{
		for (i = 0; i < size; i += 10)
		{
			printf("%.8x:", i);

			for (j = i; j < i + 10; j++)
			{
				if (j % 2 == 0)
					printf(" ");
				if (j < size)
					printf("%.2x", *(b + j));
				else
					printf("  ");
			}
			printf(" ");
			for (m = i; m < i + 10; m++)
			{
				if (m >= size)
					break;
				if (*(b + m) < 32 || *(b + m) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + m));
			}
			printf("\n");
		}
	}
}

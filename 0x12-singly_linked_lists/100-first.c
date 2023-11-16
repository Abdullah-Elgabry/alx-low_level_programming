#include <stdio.h>


void first(void) __attribute__ ((constructor));

/**
 * print - this func will prints some str before the main func
 */

void print(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

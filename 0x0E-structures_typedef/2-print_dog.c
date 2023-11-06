#include "dog.h"
#include <stdio.h>


/**
 * print_dog - function that prints a struct dog
 * @d: dog will be printed.
 *
 * Return: void fun
 */


void print_dog(struct dog *d)
{
	if (d)
	{
		if ((*d).name != 0)
			printf("Name: %s\n", (*d).name);
		else
			printf("Name: (nil)\n");
		printf("Age: %f\n", (*d).age);
		if ((*d).owner != 0)
			printf("Owner: %s\n", (*d).owner);
		else
			printf("Owner: (nil)\n");
	}
}

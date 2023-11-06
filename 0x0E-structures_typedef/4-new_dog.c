#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - this is func that creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 * Return: lenof string
 */


 
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *P;
	int s, len, own;

	P = malloc(sizeof(*P));
	if (P == NULL || !(name) || !(owner))
	{
		free(P);
		return (NULL);
	}

	for (len = 0; name[len]; len++)
		;

	for (own = 0; owner[own]; own++)
		;

	P->name = malloc(len + 1);
	P->owner = malloc(own + 1);

	if (!(P->name) || !(P->owner))
	{
		free(P->owner);
		free(P->name);
		free(P);
		return (NULL);
	}

	for (s = 0; s < len; s++)
		P->name[s] = name[s];
	P->name[s] = '\0';

	P->age = age;

	for (s = 0; s < own; s++)
		P->owner[s] = owner[s];
	P->owner[s] = '\0';

	return (P);
}

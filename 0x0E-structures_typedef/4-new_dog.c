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
	dog_t *_dog;
	int i, lname, lowner;

	_dog = malloc(sizeof(*_dog));
	if (_dog == NULL || !(name) || !(owner))
	{
		free(_dog);
		return (NULL);
	}

	for (lname = 0; name[lname]; lname++)
		;

	for (lowner = 0; owner[lowner]; lowner++)
		;

	_dog->name = malloc(lname + 1);
	_dog->owner = malloc(lowner + 1);

	if (!(_dog->name) || !(_dog->owner))
	{
		free(_dog->owner);
		free(_dog->name);
		free(_dog);
		return (NULL);
	}

	for (i = 0; i < lname; i++)
		_dog->name[i] = name[i];
	_dog->name[i] = '\0';

	_dog->age = age;

	for (i = 0; i < lowner; i++)
		_dog->owner[i] = owner[i];
	_dog->owner[i] = '\0';

	return (_dog);
}

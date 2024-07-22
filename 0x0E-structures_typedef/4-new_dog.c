#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: struct dog.
 * if fails, returns NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *a_dog;
	int i, lname, lowner;

	a_dog = malloc(sizeof(*a_dog));
	if (a_dog == NULL || !(name) || !(owner))
	{
		free(a_dog);
		return (NULL);
	}

	for (lname = 0; name[lname]; lname++)
		;

	for (lowner = 0; owner[lowner]; lowner++)
		;

	a_dog->name = malloc(lname + 1);
	a_dog->owner = malloc(lowner + 1);

	if (!(a_dog->name) || !(a_dog->owner))
	{
		free(a_dog->owner);
		free(a_dog->name);
		free(a_dog);
		return (NULL);
	}

	for (i = 0; i < lname; i++)
		a_dog->name[i] = name[i];
	a_dog->name[i] = '\0';

	a_dog->age = age;

	for (i = 0; i < lowner; i++)
		a_dog->owner[i] = owner[i];
	a_dog->owner[i] = '\0';

	return (a_dog);
}

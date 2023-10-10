#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog and copies name and owner
 * @name: name of new dog
 * @age: age of new dog
 * @owner: the owner of the new dog
 *
 * Description: a pointer to the newly created dog_t struct
 * Return: NULL if memory allocation fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		return (NULL);
	}

	dog->name = strdup(name);
	dog->owner = strup(owner);

	if (dog->name == NULL || dog->owner == NULL)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
		return (NULL);
	}

	dog->age = age;

	return (dog);
}

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
	dog_t *dog_ptr = malloc(sizeof(dog_t));

	if (dog_ptr == NULL)
	{
		return (NULL);
	}

	dog_ptr->name = strdup(name);
	dog_ptr->owner = strup(owner);

	if (dog_ptr->name == NULL || dog_ptr->owner == NULL)
	{
		free(dog_ptr->name);
		free(dog_ptr->owner);
		free(dog_ptr);
		return (NULL);
	}

	dog_ptr->age = age;

	return (dog_ptr);
}

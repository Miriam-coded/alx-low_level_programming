#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Initializes struct dog
 * @d: pointer to initialize struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: This function initializes a struct dog with
 * name, age and owner's name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

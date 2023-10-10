#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * free_dog - Frees memory associated with a dog_t struct
 * @d: pointer to the dog_t struct to free
 *
 * Description: fress the memory allocated for the dog_t struct
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			free(d->name);
		}
		if (d->owner != NULL)
		{
			free(d->owner);
		}

		free(d);
	}
}

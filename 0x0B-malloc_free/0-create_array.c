#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array of chars and
 * initalizes it with a specific char
 * @size: size of the array
 * @c: char to initialize the array with
 *
 * Return: NULL if function fails, size is 0 and pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}


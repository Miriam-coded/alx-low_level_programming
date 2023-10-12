#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - prints array element
 * @array: array
 * @size: size of the array
 * @action: pointer to the function to be executed on each element
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL && action == NULL)
	{
		return;

		unsigned int i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}

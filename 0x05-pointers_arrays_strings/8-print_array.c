#include <stdio.h>
#include "main.h"

/**
 * print_array - a function that prints n elements of an array
 * @a: array name
 * @n: is the number of elements OF the array to be printed
 * Return: a and n inputs
 */

void print_array(int *a, int n)
{
	int inp;

	for (inp = 0; inp < n; inp++)
	{
		if (inp != n - 1)
			printf("%d, ", a[inp]);
		else
			printf("%d", a[inp]);
	}
	printf("\n");
}
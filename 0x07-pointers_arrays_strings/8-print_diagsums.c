#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of 2 diagonals of a squarematrix
 * @a: name of the array
 * @size: size of the array
 *
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = size - 1;
	int sum = 0;
	int sum1 = 0;

	while (i <= (size * size))
	{
		sum = sum + a[i];
		i = i + size + 1;
	}

	while (j < (size * size - 1))
	{
		sum1 += a[j];
		j = j + size - 1;
	}

	printf("%d, %d\n", sum, sum1);
}

#include <stdio.h>
#include "main.h"

/**
 * reverse_array - reverses an array
 *
 * @a: array to reverse
 * @n: size of array
 */

void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;
	int new;

	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = new;

		start++;
		end--;
	}
}

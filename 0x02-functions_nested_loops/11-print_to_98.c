#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the number passed to the function
 *
 * Return: 0 on success
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);

		if (n > 98)
			n--;
		else
			n++;
	}
	printf("%d\n", n);
}


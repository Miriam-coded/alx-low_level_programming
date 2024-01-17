#include <stdio.h>
#include "main.h"

/**
 * print_sign - function that prints the sign of a number
 * @n: is the number
 *
 * Return: 1 if +, -1 if - and 0 of zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
		return (1);
	}
	else if (n < 0)
	{
		printf("-");
		return (-1);
	}
	else
	{
		printf("0");
		return (0);
	}
}

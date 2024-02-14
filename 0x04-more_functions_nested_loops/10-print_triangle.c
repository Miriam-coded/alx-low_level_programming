#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 *
 * Return: 0
 */

void print_triangle(int size)
{
	int i;
	int j;
	int y;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size - i; j++)
		{
			_putchar(' ');
		}

		for (y = 1; y <= i; y++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

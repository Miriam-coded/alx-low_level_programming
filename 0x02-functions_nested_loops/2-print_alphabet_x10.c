#include "main.h"

/**
 * print_alphabet_x10 - function to print alphabets 10 times
 *
 * Return: Always 0 on success
 */

void print_alphabet_x10(void)
{
	char abc;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (abc = 'a'; abc <= 'z'; abc++)
			_putchar(abc);

		_putchar('\n');
	}
}

#include "main.h"
/**
 * print_alphabet - writes alphapbets in lowercase
 *
 * Return: 0 on success
 */

void print_alphabet(void)
{
	char abc;

	for (abc = 'a'; abc <= 'z'; abc++)
		_putchar(abc);

	_putchar('\n');
}

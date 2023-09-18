#include "main.h"

/**
 * puts2 - function should print only one character out of 2
 * @str: input
 * Return: print
 */

void puts2(char *str)
{
	int n = 0;

	for (n; str[n] != '\0'; n++)
	{
		if ((n % 2) == 0)
			_putchar(str[n]);
		else 
			continue;
	}
	_putchar('\n');
}

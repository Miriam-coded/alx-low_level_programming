#include "main.h"

/**
 * string_toupper - changes all lowercase string to uppercase
 * @str: parameter
 * Return: a character
 */

char *string_toupper(char *str)
{
	int lower = 0;

	while (str[lower++])
	{
		if (str[lower] >= 'a' && str[lower] <= 'z')
			str[lower] -= 32;
	}

	return (str);
}

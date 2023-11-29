#include "main.h"
#include <ctype.h>
/**
 * _isalpha - function that checks for alphabeticcharacter
 * @c: character to be checked
 *
 * Return: 1 if is a letter, otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
		return (0);
}

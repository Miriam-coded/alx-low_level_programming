#include "main.h"

/**
 * _isdgit - checks for a digit
 * @c: where the integer is located
 *
 * Return: 1 if found and 0 if not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);

	return (0);
}

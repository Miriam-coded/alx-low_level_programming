#include "main.h"

/**
 * _abs - returns absolute value of an integer
 * @n: integer from which to get the absolute value from
 *
 * Return: n if int is greater than 1
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}

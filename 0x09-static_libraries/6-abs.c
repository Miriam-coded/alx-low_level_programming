#include "main.h"

/**
 * _abs - returns absolute value of an image
 * @n: integer from which to get the absolute value from
 *
 * return: Void
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}

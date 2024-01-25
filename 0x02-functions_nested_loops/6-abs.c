#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _abs - computes the absolute value of an int (positive values only
 * @int: integer whose value is to be computed
 *
 * Return: absolute value of int
 *
 */

int _abs(int i)
{
	if (i < 0)
		return (-i);
	else
		return (i);
}

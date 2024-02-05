#include <stdio.h>

/**
 * positive_or_negative - checks if integer is positive or negative
 * @i: the number to check
 *
 * Return: Always 0 (Success)
 */

int positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);


	return (0);
}

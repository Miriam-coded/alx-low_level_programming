#include "main.h"

/**
 * factorial - function returns a factorial of a number
 *
 * @n: if this number is less than 0,
 * the function will return -1 to indicate an error
 * Factorial of 0 is 1
 *
 * Return: factorial number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

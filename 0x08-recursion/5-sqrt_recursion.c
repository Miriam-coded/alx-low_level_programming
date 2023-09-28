#include "main.h"

int sqrt(int n, int num);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: is the number to calulate the square root of
 * if n doesnot have a natural square root, return -1
 *
 * Return: squareroot of number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt(n, 0));
}

/**
 * sqrt - finds the natural squareroot
 * @n: the number to find the square root of
 * @num: current number for the square root
 *
 * Return: square root
 */

int sqrt(int n, int num)
{
	if (num * num > n)
		return (-1);
	if (num * num == n)
		return (num);
	return (sqrt(n, num + 1));
}

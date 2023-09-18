#include "main.h"

/**
 * print_rev - function that prints a string in reverse
 * front is to first count to end, back is to count back
 * @s: string input
 * Return: string in reverse
 */

void print_rev(char *s)
{
	int front = 0;
	int i, back;

/**	for (i = 0; s[i] != '\0'; i++)
*	{
*		front++;
*	} 
*/
	for  (back = (front - 1); back >= 0; back--)
	{
		_putchar(s[back]);
	}
	_putchar('\n');
}

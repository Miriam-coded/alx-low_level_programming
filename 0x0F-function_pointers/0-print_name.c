#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function that prints a name
 * @name: Name to be printed
 * @f: this functiontakes a character pointer and prints
 *
 * Description: this function takes a name and a function as arguments, and
 * uses the provided function to print the name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}

#include "main.h"

/**
 * _strlen - This function returns the length of a string
 * @s: char input
 *
 * Return: length of the input string
 */
int _strlen(char *s)
{
	int count, string;

	string = 0;

	for (count = 0; s[count] != '\0'; count++)
		string++;

	return (string);
}

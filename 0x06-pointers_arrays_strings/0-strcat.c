#include "main.h"

/**
 * _strcat - function that concanates two strings
 * @dest:will be appended
 * @src: will be concanated
 *
 * Return: a pointer resuting string @dest
 */

char *_strcat(char *dest, char *src)
{
	char *string = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (string);
}

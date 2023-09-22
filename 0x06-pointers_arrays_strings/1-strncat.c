#include "main.h"
/**
 * _strncat - concanates 2 strings then adds the inputed number of bytes
 * @dest: to be appended
 * @src: to be concanated
 * @n: to compare the index to
 *
 * Return: new concanated string
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	char *string = dest;


	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';

	return (string);
}

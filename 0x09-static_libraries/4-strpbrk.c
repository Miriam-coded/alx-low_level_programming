#include <stdlib.h>
#include "main.h"

/**
 * _strpbrk - locates the first occurence in @s of any bytes in @accept
 *
 * @s: the string to search
 * @accept: the bytes to be located
 *
 * Return: a pointer to the byte in s that matches one of the bytes
 * in accept or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}

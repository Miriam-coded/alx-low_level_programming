#include <stdlib.h>
#include "main.h"

/**
 * _strstr - function finds the occurence of the substring
 *
 * @needle: substring to be found
 * @haystack: string where @needle is to be located
 *
 * Return: a pointer to the beginning of the located substring or
 * NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int s = 0;

	while (needle[s] != '\0')
		s++;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != s)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}

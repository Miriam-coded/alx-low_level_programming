#include "main.h"

/**
 * _strchr - locates a character in the string
 *
 * @c: the character to be checked
 * @s: the string where the character should be checked
 *
 * Return: a pointer to the first occurence of
 * @c or NULL if character is not found.
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}

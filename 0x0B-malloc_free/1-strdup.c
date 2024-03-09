#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a new string,
 * which is the duplicate of the string
 * @str: string to be duplicated
 *
 * Return: NULL if str is NULL, pointer to the duplicated string or
 * NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *str1;
	unsigned int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	str1 = malloc(sizeof(char) * (len + 1));

	if (str1 == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		str1[i] = str[i];

	return (str1);
}

#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments in this program
 * @ac: arg count
 * @av: array of arg strings
 *
 * Return: NULL if ac == 0 or av == 0 or if it fails otherwise
 * a pointer to an new string
 */

char *argstostr(int ac, char **av)
{
	char *result;
	int i, j, k = 0, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		len++;
	}
	len++;

	result = malloc(sizeof(char) * len);

	if (result == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			result[k++] = av[i][j];
		result[k++] = '\n';
	}
	result[k] = '\0';

	return (result);
}

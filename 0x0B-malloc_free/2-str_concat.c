#include <stdlib.h>
/**
 * str_conca - concatenates s1 and s2
 * @s1: string to concatenante
 * @s2: another string to concatenate
 *
 * Return: NULL if str is NULL, NULL on function failure otherwise
 * pointer pointing to the newly allocated space in mem containing s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int i, j, len_s1 = 0, len_s2 = 0;

	if (s1 != NULL)
	{
		while (s1[len_s1])
			len_s1++;
	}

	if (s2 != NULL)
	{
		while (s2[len_s2])
			len_s2++;
	}


	concat_str = malloc(sizeof(char) * (len_s1 + len_s2 + 1));

	if (concat_str == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
		concat_str[i] = s1[i];

	for (j = 0; j < len_s2; j++)
		concat_str[i + j] = s2[j];

	concat_str[i + j] = '\0';
	
	return (concat_str);
}

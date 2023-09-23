#include "main.h"
/**
 * leet - leet
 * @s: string
 *
 * Return: char value
 */
char *leet(char *s)
{
	char *ptr = str;
	char leet_old[] = "AaEeOoTtLl";
	char leet_new[] = "4433007711";

	while (*str)
	{
		for (int i = 0; leet_old[i] != '\0'; i++)
		{
			if (*str == leet_old[i])
			{
				*str = leet_new[i];
			break;
			}
		}
	str++;
	}

	return (ptr);
}

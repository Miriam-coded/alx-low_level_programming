#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * ispositive - checks if string is a positive number
 * @s: string to be checked
 *
 * Return: 1 if positive 0 if not
 */

int ispositive(char *s)
{
	if (*s == '\0')
		return (0);

	while (*s)
	{
		if (!isdigit(*s))
			return (0);
		s++;
	}

	return (1);
}

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (ispositive(argv[i]))
		{

			int num = atoi(argv[i]);

			sum += num;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);

	return (0);
}

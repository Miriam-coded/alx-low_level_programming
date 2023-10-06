#include <stdio.h>
#include <stdlib.h>

/**
 * _atoi - converts a string to an int
 * @s: string to be converted
 *
 * Return: the int converted from the string, or 0 on error
 */

int _atoi(char *s)
{
	int n = 0;
	int sign = 1;
	int i = 0;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			n = n * 10 + (s[i] - '0');
		}
		else
		{
			return (0);
		}
		i++;
	}

	return (n * sign);
}

/**
 * main - prints num1 * num2 results
 * @argc: number of arguments
 * @argv: array or aguments
 *
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	int num1, num2, ans;

	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);

	if (num1 == 0 || num2 == 0)
	{
		printf("Error\n");

		return (1);
	}

	ans = num1 * num2;

	printf("%d\n", ans);

	return (0);
}

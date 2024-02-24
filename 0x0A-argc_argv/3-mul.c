#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies 2 numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: multiple of the numbers if argc == 3
 * else returns 1 and print Error
 */

int main(int argc, char *argv[])
{
	int mul = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
		return (0);
	}
}

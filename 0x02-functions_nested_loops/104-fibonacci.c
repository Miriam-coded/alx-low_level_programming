#include <stdio.h>

/**
 * main - finds and prints the first 98 fibonacci numbers
 *
 * Return: 0 on success
 */

int main(void)
{
	unsigned long int one, two, next, count;

	one = 1.0;
	two = 2.0;

	for (count = 0; count < 98; count++)
	{
		printf("%lu", one);

		if (count != 97)
		{
			printf(", ");
		}

		next = one + two;
		one = two;
		two = next;
	}


	printf("\n");
	return (0);
}

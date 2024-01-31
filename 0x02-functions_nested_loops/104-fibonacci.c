#include <stdio.h>

/**
 * main - finds and prints the first 98 fibonacci numbers
 *
 * Return: 0 on success
 */

int main(void)
{
	double one, two;
	int count;

	one = 1.0;
	two = 2.0;
	count = 0;

	do {
		printf("%.0f, %.0f", one, two);

		if (count < 96)
		{
			printf(", ");
		}

		one = one + two;
		two = two + one;
		count = count + 2;
	} while (count < 98);

	printf("\n");
	return (0);
}

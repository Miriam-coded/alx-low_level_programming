#include <stdio.h>

/**
 * main - prints first 50 fibonacci numbers
 *
 * Return: 0 always.
 */

int main(void)
{
	double one, two;
	int count;

	one = 1.0;
	two = 2.0;
	count = 0;

	do {
		printf("%.0f", one);

		if (count < 48)
		{
			printf(", ");
		}

		one = one + two;
		two = two + one;
		count += 2;
	} while (count < 50);

	printf("\n");
	return (0);
}

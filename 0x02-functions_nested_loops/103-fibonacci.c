#include <stdio.h>

/**
 * main - prints even numbers upto 4,000,000 using the fibonacci sequence
 *
 * Return: 0 on seccess.
 */

int main(void)
{
	double one, two, next;

	one = 0.0;
	two = 2.0;
	next = 0.0;

	for (next = 0; next <= 4000000; next + 2)
	{
		if ((int)next % 2 == 0)
		{
			printf("%.0f, ", next);
		}

		one = two;
		two = next;
		next = one + two;
	}

	printf("\n");
	return (0);
}

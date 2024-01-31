#include <stdio.h>

/**
 * main - prints even numbers upto 4,000,000 using the fibonacci sequence
 *
 * Return: 0 on seccess.
 */

int main(void)
{
	long int one, two, sum, next;

	one = 1;
	two = 2;
	sum = 0;

	while (two <= 4000000)
	{
		if (two % 2 == 0)
		{
			sum += two;
		}

		next = one + two;
		one = two;
		two = next;
	}

	printf("%ld\n", sum);
	return (0);
}

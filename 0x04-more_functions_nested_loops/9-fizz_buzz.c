#include <stdio.h>

/**
 * main - print 1-100 where numbers divisible by 3 prints fizz
 * divisible by 5 Buzz and by 15 FizzBuzz
 *
 * Return: 0
 */

int main(void)
{
	int num = 1;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", num);
		}
	}
	printf("\n");
	return (0);
}

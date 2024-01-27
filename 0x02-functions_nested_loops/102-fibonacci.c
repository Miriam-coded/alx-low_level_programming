 #include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers
 *
 * Return: 0 Always.
 */

int main(void)
{
	int one = 1;
	int two = 2;
	int count;

	for (count = 0; count <= 50; count++)
	{
		printf("%d, ", one);

		one = one + two;

		printf("%d, ", two);

		two = two + one;
	}
	printf("\n");
	return (0);
}


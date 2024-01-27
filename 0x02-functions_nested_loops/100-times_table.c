#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints n times table
 * @n: number that the function passes
 *
 * Return: 0 on Success.
 */

void print_times_table(int n)
{
	int i;
	int j;

	while (n > 15 || n < 0)
	{
		return;
	}

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int ans = i * j;

			if (j == 0)
			{
				printf("%d", ans);
			}
			else
			{
				printf(", %3d", ans);
			}
		}
		printf("\n");
	}
}

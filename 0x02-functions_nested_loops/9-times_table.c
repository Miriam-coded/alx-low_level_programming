#include <stdio.h>
#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: 0 on success
 */

void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int ans = i * j;

			if (j == 0)
			{
				printf("%d", ans);
			}
			else
			{
				printf(", %2d", ans);
			}
		}
		printf("\n");
	}
}

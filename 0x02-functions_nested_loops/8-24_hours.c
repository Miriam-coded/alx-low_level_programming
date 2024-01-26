#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: 0 Always Success
 */

void jack_bauer(void)
{
	int hour;
	int min;

	for (hour = 0; hour < 24; hour++)
	{
		for (min = 0; min < 60; min++)
		{
			printf("%02d:%02d\n", hour, min);
		}
	}
}

#include "main.h"

/**
 * rev_string - reverses a string
 * @s: input to revrse
 *Return: string and in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int front = 0;
	int i;

	while (s[front] != '\0')
		front++;

	for (i = 0; i < front; i++)
	{
		front--;
		rev = s[i];
		s[i] = s[front];
		s[front] = rev;
	}
}

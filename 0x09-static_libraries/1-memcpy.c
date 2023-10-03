#include "main.h"

/**
 * _memcpy - function copies bytes from memory area
 *
 * @n: bytes to be copied
 * @src: from this memory area
 * @dest: to this memory area
 *
 * Return: a pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}

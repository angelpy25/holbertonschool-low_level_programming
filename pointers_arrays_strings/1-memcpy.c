#include "main.h"

/**
 * _memcpy - copy a memory to another
 * @dest: destination string
 * @src: source of copy
 * @n: number of bytes
 * Return: the copy memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}


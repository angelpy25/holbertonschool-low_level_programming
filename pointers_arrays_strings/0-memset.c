#include "main.h"

/**
 * _memset - fill the first n bytes of memory
 * @s: string given
 * @b: bytes
 * @n: number of times
 * Return: the string fullfill
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

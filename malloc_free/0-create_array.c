#include "main.h"
#include <stdlib.h>

/**
 * create_array - create a string
 * @size: size of the string given
 * @c: string given
 * Return: the string or NUll
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	p = malloc(size * sizeof(*p));

	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}

	return (p);
}

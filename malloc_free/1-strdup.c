#include "main.h"
#include <stdlib.h>

/**
 * strdup - duplicate a string
 * @str: string given
 * Return: NULL or the direction of the duplicate string
 */

char *_strdup(char *str)
{
	char *c;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
	}

	c = malloc(i * sizeof(*c) + 1);
	if (c == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		c[j] = str[j];
	}
	c[j] = '\0';

	return (c);
}

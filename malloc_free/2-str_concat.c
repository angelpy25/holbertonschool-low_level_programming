#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate 2 strings
 * @s1: first string
 * @s2: second string
 * Return: NULL or a string concatenate
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, j, x, z, size;

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	str = malloc((i + j) * sizeof(*str) + 1);
	size = i + j + 1;
	if (str == NULL)
		return (NULL);

	for (x = 0, z = 0; x < size; x++)
	{
		if (x < i)
		{
			str[x] = s1[x];
		}
		else
		{
			str[x] = s2[z++];
		}
	}
	return (str);
}

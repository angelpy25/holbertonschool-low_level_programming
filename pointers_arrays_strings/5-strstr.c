#include "main.h"
#include <stdlib.h>

/**
 * _strstr - find a substring
 * @haystack- string given
 * @needle: substring that will be search
 * Return: The substring found or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; needle[i] != '\0'; i++)
	{
	}
	for (; *haystack; haystack++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[j] != needle[j])
				break;
		}
		if (i == j)
			return (haystack);
	}
	return (NULL);
}

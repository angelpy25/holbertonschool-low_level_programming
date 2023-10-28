#include "main.h"
#include <stdlib.h>

/**
 * _strpbrk - search a string for a set
 * @s: string given
 * @accept: what to search
 * Return: instance found
 */

char *_strpbrk(char *s, char *accept)
{
	int  j;

	for (; *s; s++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
	}
	return (NULL);
}

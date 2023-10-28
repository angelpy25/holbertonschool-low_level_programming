#include "main.h"
#include <stdlib.h>

/**
 * _strchr - find a character in the string
 * @s: string given
 * @c: character to find
 * Return: start of the character or null
 */

char *_strchr(char *s, char c)
{

	for (; *s ; s++)
	{
		if (*s == c)
		{
			return s;
		}
	}
	return (NULL);
}

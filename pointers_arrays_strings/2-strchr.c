#include <stdlib.h>
#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string given
 * @c: character to find
 * Return: the character found or Null
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}

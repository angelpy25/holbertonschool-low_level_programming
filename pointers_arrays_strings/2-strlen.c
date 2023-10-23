#include "main.h"

/**
 * _strlen - it count the string length
 * @s: string given
 * Return: the length
 */

int _strlen(char *s)
{
	int count = 0;

	while	(s[count] != '\0')
		count++;

	return (count);
}

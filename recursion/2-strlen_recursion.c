#include "main.h"

/**
 * _strlen_recursion - check how long is the string
 * @s: string given
 * Return: the count of the length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return 1 + _strlen_recursion(s + 1);
}

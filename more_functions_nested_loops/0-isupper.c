#include "main.h"

/**
 * _isupper - check if the parameter is an upper letter
 * @c: number given
 * Return: 1 if positive 0 if not
 */
int _isupper(int c)
{
	if (c >= 65 || c <= 90)
	{
		return (1);
	}
	else
		return (0);

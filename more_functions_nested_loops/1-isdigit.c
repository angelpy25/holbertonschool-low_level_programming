#include "main.h"

/**
 * _isdigit - check if the parameter is a integer from 0 to 9
 * @c: number given
 * Return: 1 if positive 0 if not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}

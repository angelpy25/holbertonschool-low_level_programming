#include "main.h"

/**
 * _abs - computes the absolute number
 * @a: number that will be compue
 * Return: the absolute number of the integer given
 */
int _abs(int a)
{
	if (a >= 0)
	{
		return (a);
	}
	else
	{
		a = a * -1;
		return (a);
	}
}

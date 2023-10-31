#include "main.h"

/**
 * _pow_recursion - calculates the pow of x to y
 * @x: number given
 * @y: power of x
 * Return: the number of the result
 */

int _pow_recursion(int x, int y)
{
	if (x == 0)
		return (0);
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	return (x *  _pow_recursion(x, y - 1));
}

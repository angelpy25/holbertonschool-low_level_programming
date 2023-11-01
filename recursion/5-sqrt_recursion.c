#include "main.h"

/**
 * square_root - find the square root using 2 numbers
 * @a: first number
 * @b: second number
 * Return: the sqrt
 */

int square_root(int a, int b)
{
	if (b * b > a)
		return (-1);
	else if (b * b == a)
		return (b);
	else
		return (square_root(a, b + 1));
	return (1);
}
/**
 * _sqrt_recursion - returns the sqrt of the number
 * @n: number given
 * Return: sqrt
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (square_root(n, 1));
}

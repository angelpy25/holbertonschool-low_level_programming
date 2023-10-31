#include "main.h"

/**
 * factorial - factorial of a number
 * @n: number given
 * Return: the factorial or -1 if it is lower than 0
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}

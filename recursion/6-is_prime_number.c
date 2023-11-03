#include "main.h"

/**
 * pmf - prime number finder
 * @a: number given
 * @b: number of iterations
 * Return: if it is a prime
 */

int pmf(int a, int b)
{
	if (a <= 1 || a % b == 0)
		return (0);
	else if (a == b)
		return (1);
	else if (a > b)
		pmf(a, b + 1);
	
	return (1);
}
/**
 * is_prime_number - return the prime number
 * @n: number given
 * Return: 0 or 1 if it is a prime number
 */
int is_prime_number(int n)
{
	return (pmf(n, 2));
}

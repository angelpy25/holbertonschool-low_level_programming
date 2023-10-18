#include "main.h"


/**
 * print_sign - given a number prints if it is positive, negative or zero
 * @n: the number given
 * Return: it varies the result it returns what the result is
 */
int print_sign(int n)
{
	if (n >= 1)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

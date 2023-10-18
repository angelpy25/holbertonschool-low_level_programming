#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @pld: number that will be examine
 * Return: return the last number of pld
 */
int print_last_digit(int pld)
{
	int last = pld % 10;

	if (last < 0)
	{
		last = last * -1;
	}
	_putchar('0' + last);
	return (last);
}

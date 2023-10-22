#include "main.h"

/**
 * print_diagonal - print a diagonal with a special character and spaces
 * @n: how much it will print
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
	for (i = 0; i < n; i++)
	{
		for (j = i; j > 0; j--)
		{
			_putchar(' ');
		}
	_putchar('\\');
	_putchar('\n');
	}
	}
}

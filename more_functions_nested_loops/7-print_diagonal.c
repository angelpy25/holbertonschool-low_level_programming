#include "main.h"

/**
 *print_diagonal - print a diagonal using \
 *@n: how many time diagonal gonna be printed
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i > n; i++)
	{
		for (j = i; j > 0; j--)
		{
			_putchar(' ');
		}
	_putchar('\\');
	_putchar('\n');
	}
}	

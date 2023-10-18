#include "main.h"
#include <stdio.h>

/**
 * print_times_table - print the times n of the table
 * @n: number of the table
 */
void print_times_table(int n)
{
	int i, j, m;

	if (n > 15 || n < 0)
	{
		
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				m = i * j;
				if ( j == 0)
				{
					_putchar('0');
					continue;
				}
				if ( m >= 10)
				{
					printf(", %d", m);
				}
				else
				{
					printf(",  %d", m);
				}
			}
		}
	}
}

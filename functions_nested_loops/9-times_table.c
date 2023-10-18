#include "main.h"

/**
 * times_table - print the multiplication table of 9
 */
void times_table(void)
{
	int i, j, m;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			m = i * j;
			_putchar('0' + m);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}

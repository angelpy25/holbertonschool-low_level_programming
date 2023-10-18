#include "main.h"

/**
 * times_table - print the multiplication table of 9
 */
void times_table(void)
{
	int i, j, m, mlast, mfirst;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			m = i * j;
			if (m >= 10)
			{
				mlast = m % 10;
				mfirst = m / 10;
				_putchar('0' + mfirst);
				_putchar('0' + mlast);
				_putchar(',');
				_putchar(' ');
			}
			else
			{
			_putchar('0' + m);
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

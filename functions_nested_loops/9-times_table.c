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
			mfirst = m / 10;
			mlast = m % 10;
			if (j == 0)
			{
				_putchar('0');
			}

			if (m >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + mfirst);
				_putchar('0' + mlast);

			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + m);
			}
		}
		_putchar('\n');
	}
}

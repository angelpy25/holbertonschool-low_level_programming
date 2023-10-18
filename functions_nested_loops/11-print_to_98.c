#include "main.h"

/**
 * print_to_98 - print all natural numbers up to 98
 * @n: number given
 */
void print_to_98(int n)
{
	int abs, fnmbr, lnmbr;

	for (; n < 99; n++)
	{
		if (n < 0)
		{
			if (n < -9)
			{
				abs = n * -1;
				fnmbr = abs / 10;
				lnmbr = abs % 10;
				_putchar('-');
				_putchar('0' + fnmbr);
				_putchar('0' + lnmbr);
				_putchar(',');
				_putchar(' ');
			}
			abs = n * -1;
			_putchar('-');
			_putchar('0' + abs);
			_putchar(',');
			_putchar(' ');
		}
		else if (n >= 0 && n <=9)
		{
			_putchar('0' + n);
			_putchar(',');
			_putchar(' ');
		}
		else if (n >= 10 && n <= 97)
		{
			fnmbr = n / 10;
			lnmbr = n % 10;
			_putchar('0' + fnmbr);
			_putchar('0' + lnmbr);
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			fnmbr = n / 10;
			lnmbr = n % 10;
			_putchar('0' + fnmbr);
			_putchar('0' + lnmbr);
		}
	}	
}

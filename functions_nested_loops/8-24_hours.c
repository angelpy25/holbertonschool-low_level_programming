#include "main.h"

/**
 * jack_bauer - print every minute of a day
 */
void jack_bauer(void)
{
	int i, j, ilast, ifirst, jlast, jfirst;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			jlast = j % 10;
			jfirst = j / 10;
			ilast = i % 10;
			ifirst = i / 10;
			_putchar(ifirst + '0');
			_putchar(ilast + '0');
			_putchar(':');
			_putchar(jfirst + '0');
			_putchar(jlast + '0');
			_putchar('\n');
		}
	}
}

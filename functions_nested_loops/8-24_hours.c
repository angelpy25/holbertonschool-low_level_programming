#include "main.h"

/**
 * jack_bauer - print every minute of a day
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			_putchar(i + '0');
			_putchar(':');
			_putchar(i + '0');
			_putchar('\n');
		}
	}
}

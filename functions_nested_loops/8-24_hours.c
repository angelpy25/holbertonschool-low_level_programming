#include "main.h"


void jack_bauer(void)
{
	int i, j, x, z;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (x = 0; x < 6; x++)
			{
				for (z = 0; z < 10; z++)
				{
					_putchar('0' + i);
					_putchar('0' + j);
					_putchar(':');
					_putchar('0' + x);
					_putchar('0' + z);
					_putchar('\n');
				}
			}
		}
	}
}

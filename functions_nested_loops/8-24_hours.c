#include "main.h"


void jack_bauer(void)
{
	int i, j, x, z;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			for (x = 0; x < 6; x++)
			{
				for (z = 0; z < 10; z++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(x);
					_putchar(z);
					_putchar('\n');
				}
			}
		}
	}
}

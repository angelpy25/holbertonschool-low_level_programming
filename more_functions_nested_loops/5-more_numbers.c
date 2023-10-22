#include "main.h"

/**
 * more_numbers - print from 1 to 14 10 times
 */
void more_numbers(void)
{
	int i, j, x;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 14; j++)
		{
			if (b > 9)
			_putchar('0' + j / 10);
			_putchar('0' + j % 10);
		}
		_putchar('\n');
	}
}

#include "main.h"

/**
 * puts_half - print half of the string
 * @str: string given
 */

void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
	}

	i--;

	for (j = 0; str[j] != '\0'; j++)
	{
		if (j > (i / 2))
			_putchar(str[j]);
	}
	_putchar('\n');
}



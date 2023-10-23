#include "main.h"

/**
 *print_triangle - Print an rectangle triangle
 *@size: Size of the triangle
 */

void print_triangle(int size)
{
	int i, j, count;

	count = size - 1;
	if (size > 0)
	{
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < count; j++)
			_putchar(' ');
		for (; j < size; j++)
			_putchar('#');
		_putchar('\n');
		count -= 1;
	}
	}
}

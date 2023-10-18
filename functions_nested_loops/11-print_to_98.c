#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print all natural numbers up to 98
 * @n: number given
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	printf("%d\n",n);
}

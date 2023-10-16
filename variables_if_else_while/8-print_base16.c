#include <stdio.h>

/**
 * main - print in hexadecimal
 * Return: o
 */
int main(void)
{
	int i;

	char A = 'A';

	for (i = 0; i < 16; i++)
	{
		if (i > 9)
		{
			putchar(A);
			A++;
		}
		putchar('0' + i);
	}
	return (0);
}

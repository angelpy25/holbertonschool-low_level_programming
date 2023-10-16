#include <stdio.h>

/**
 * main - print in hexadecimal
 * Return: o
 */
int main(void)
{
	int i;

	char A = 'a';

	for (i = 0; i < 16; i++)
	{
		if (i > 9)
		{
			putchar(A);
			A++;
		}
		else
		{
		putchar('0' + i);
		}
	}
	putchar('\n');
	return (0);
}

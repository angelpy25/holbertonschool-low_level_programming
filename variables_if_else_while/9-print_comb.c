#include <stdio.h>

/**
 * main - prints all possible combinations of single - digit numbers
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; ++i)
	{
		putchar('0' + i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
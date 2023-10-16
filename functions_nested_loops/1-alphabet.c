#include "main.h"

/**
 * main - print the alphabet
 * Return: 0
 *
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a < 'z'; ++a)
	{
		_putchar(a);
	}
	_putchar('\n');
}

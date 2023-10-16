#include <stdio.h>

/**
 * main - print alphabet in lowercase and uppercase
 *Return: 0
 */
int main(void)
{
	char a,A;
	
	A = 'A';

	for (a = 'a'; a <= 'z'; ++a)
	{
		putchar(a);
		putchar(A);
		++A;
	}
	return (0);
}

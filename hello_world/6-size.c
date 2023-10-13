#include <stdio.h>
/**
 * main - prints the size of the number register
 * Return: 0
 */
int main(void)
{
	char c;

	int i;

	long int li;

	long long int lli;

	float f;

	c = 'a';
	i = 1;
	li = 5;
	ll1 = 20;
	f = 2.0;
	printf("Size of a char: %d\n", sizeof(c));
	printf("Size of an int: %d\n", sizeof(i));
	printf("Size of a long int: %d\n", sizeof(li));
	printf("Size of a long long int: %d\n", sizeof(lli));
	printf("Size of a float: %d\n", sizeof(f));
	return (0);
}

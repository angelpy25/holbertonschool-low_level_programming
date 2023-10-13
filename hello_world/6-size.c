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
	printf("Size of a char: %zu byte(s)\n", sizeof(c));
	printf("Size of an int: %zu byte(s)\n", sizeof(i));
	printf("Size of a long int: %zu byte(s)\n", sizeof(li));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(lli));
	printf("Size of a float: %zu byte(s)\n", sizeof(f));
	return (0);
}

#include <stdio.h>

/**
 * main - count the arguments
 * @argc: size of array
 * @argv: vector array
 * Return: 0
 */

int main(int argc, char __attribute__((unused)) **argv)
{
	int count = 0;

	while(--argc)
	{
		count++;
	}
	printf("%d\n", count);
	return (0);
}
	

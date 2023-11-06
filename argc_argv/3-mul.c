#include <stdio.h>

/**
 * main - multiply two numbers
 * @argc: length of the array
 * @argv: numbers that will be multiply
 * Return: 1 if error or 0
 */

int main(int argc, char **argv)
{
	int res = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
		res = argv[1] * argv[2];
	printf("%d\n", result);
	return (0);

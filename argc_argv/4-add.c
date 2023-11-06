#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: length of the array
 * @argv: numbers that will be adding
 * Return: 1 if error or 0
 */

int main(int argc, char **argv)
{
	int i, sum, num;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < argc; i++)
	{
		num = atoi(argv[i]);
		if (isdigit(num) == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	return (0);
}

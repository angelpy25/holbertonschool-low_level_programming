#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two numbers
 * @argc: length of the array
 * @argv: numbers that will be multiply
 * Return: 1 if error or 0
 */

int main(int argc, char *argv[]) 
{
	if (argc != 3) 
	{
	    printf("Error\n");
	    return (1);
	}
	 
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	 
	int result = num1 * num2;
	 
	printf("%d\n", result);
	 
	return (0);
}

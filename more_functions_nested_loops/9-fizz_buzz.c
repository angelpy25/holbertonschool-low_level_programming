#include "main.h"
#include <stdio.h>

/**
 * print_FizzBuzz - print from 1 to 100 and print fizz is it is multiple of 3
 */

void print_FizzBuzz(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz ");
		}
		else if ((i % 3) == 0)
			printf("Fizz ");
		else if ((i % 5) == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}

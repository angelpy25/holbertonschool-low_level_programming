#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - sum of the two diagonals
 * @a: array given
 * @size: size of the array
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0;

	for (i = 0; i <= (size * size);)
	{
		sum1 += a[i];
		i += size + 1;
	}
	for (j = size - 1; j < (size * size - 1);)
	{
		sum2 += a[j];
		j += size - 1;
	}
	printf("%d, %d\n", sum1, sum2);
}


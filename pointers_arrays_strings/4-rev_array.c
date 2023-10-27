#include "main.h"

/**
 * reverse_array - reverse an array of integers
 * @a: array given
 * @n: number of elements
 */

void reverse_array(int *a, int n)
{
	int i, temp, j = n - 1;

	for (i = 0; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}

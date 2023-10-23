#include "main.h"

/**
 *swap_int - swap values of pointers
 *@a: first value
 *@b: second value
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}

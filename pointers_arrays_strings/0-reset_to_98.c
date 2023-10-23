#include "main.h"

/**
 * reset_to_98 - reset the value of the pointer
 */

void reset_to_98(int *n)
{
	int *p;

	p = &n;

	*p = 98;
}

#include "main.h"
#include <stdlib>

/**
 * malloc_checked - allocated a memory
 * @b: memory size to allocated
 * Return: pointer to memory
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}

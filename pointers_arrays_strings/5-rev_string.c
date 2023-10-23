#include "main.h"

/**
 * rev_string - it reverse the string given
 * @s: string given
 */

void rev_string(char *s)
{
	int count = 0, i, j;

	char temp;

	while (*(s + count) != '\0')
	{
		count++;
	}
	count--;
	for (i = 0, j = count; i < j; i++, j--)
	{
		temp = *(s + i);
		*(s + i) = *(s + j);
		*(s + j) = temp;
	}
}

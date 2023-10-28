#include "main.h"

/**
 * _strspn - count the characters
 * @s: string given
 * @accept: string that will be comparing to count
 * Return: numbers of time
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j,  count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					count++;
			}
		}
		else
			return (count);
	}
	return (count);
}

#include "main.h"

/**
 * leet - change expecific characters to numbers
 * @s: string given
 * Return: string change with numbers
 */

char *leet(char *s)
{
	int i, j;
	char a[] = {'a', 'e', 'o', 't', 'l'};
	char n[] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == a[j] || s[i] == a[j] - 32)
				s[i] = n[j];
		}
	}
	return (s);
}


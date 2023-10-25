#include "main.h"

/**
 * _atoi - change a string into integer
 * @s: string given
 * Return: the integer inside the string
 */

int _atoi(char *s)
{
	int i, change = 0, neg = 0, pos = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			neg++;
		if ((s[i] >= 48 && s[i] <= 57))
		{
			change = change * 10 + s[i] - '0';
			if (s[i + 1] < 48 || s[i + 1] > 57)
				break;
		}
	}
	if (neg % 2 == 1)
		return (-1 * change);
	else
		return (change);
}

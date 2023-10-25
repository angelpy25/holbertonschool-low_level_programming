#include "main.h"

int _atoi(char *s)
{
	int i, change = 0, neg = 0, pos = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			neg++;
		if (s[i] == '+')
			pos++;
		if ((s[i] >= 48 && s[i] <= 57))
		{
			change = change * 10 + s[i] - '0';
			if (s[i + 1] < 48 || s[i + 1] > 57 )
				break;
		}
	}
	if (neg > pos)
		return (-1 * change);
	else
		return (change);
}

#include "main.h"

/**
 * cap_string - capitalize all the words
 * @str: string given
 * Return: the string with all capitalization
 */

char *cap_string(char *str)
{
	int i;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == '-')
		{
			continue;
		}
		else if ((str[i] >= 1 && str[i] <= 47) || (str[i] >= 58 && str[i] <= 63))
		{
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
				str[i + 1] = str[i + 1] - 32;
			else
				continue;
		}
		else if ((str[i] >= 91 && str[i] <= 96) || (str[i] >= 123 && str[i] <= 126))
		{
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
				str[i + 1] = str[i + 1] - 32;
			else
				continue;
		}
	}
	return (str);
}

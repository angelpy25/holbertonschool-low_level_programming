#include "main.h"

/**
 * _isalpha - check if it is a leter lower or upper
 * @c: input to check
 * Return: 1 if true 0 if not
 */
int _isalpha(int c)
{
	int temp = c;

	if ((temp >= 65 && temp <= 90) || (temp >= 97 && temp <= 122))
	{
		return (1);
	}
	else
		return (0);
}

#include "main.h"


char *_strcat(char *dest, char *src)
{

	int i = 0, j = 0;

	for (; dest[i] != '\0'; i++)
	{
	}

	*(dest + i) = ' ';
	i++;
	for (; src[j] != '\0'; i++, j++)
	{
		*(dest + i) = *(src + j);
	}
	*(dest + i) = '\0';
	return (dest);
}

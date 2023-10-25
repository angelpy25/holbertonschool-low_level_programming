#include "main.h"

/**
 * *_strcat - concatenate two strings
 * @dest: destination string
 * @src: string that will be add
 * Return: the string concatenate
 */

char *_strcat(char *dest, char *src)
{

	int i = 0, j = 0;

	for (; dest[i] != '\0'; i++)
	{
	}
	for (; src[j] != '\0'; i++, j++)
	{
		*(dest + i) = *(src + j);
	}
	*(dest + i) = '\0';
	return (dest);
}

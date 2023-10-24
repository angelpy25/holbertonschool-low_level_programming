#include "main.h"

/**
 * *_strcpy - copy a string from another
 * @dest: destination of the copy string
 * @src: file that will be copy
 * Return: return the copy string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}

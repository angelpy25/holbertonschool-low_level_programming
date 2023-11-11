#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - create a 2d array
 * @width: width of the array
 * @height: height of the array
 * Return: Return NULL or the 2d array
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width + height < 2 || width < 1 || height < 1)
		return (NULL);

	array = malloc(height * sizeof(*array));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(**array));
		if (array[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(array[i]);
			free(array);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}

	return (array);
}

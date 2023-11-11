#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free the 2d array
 * @grid: array given
 * @height: height of the 2d array
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

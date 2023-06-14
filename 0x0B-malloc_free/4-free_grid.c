#include "main.h"
#include <stdlib.h>

/**
 * free_grid - a function that frees a two-dimensional array
 *@grid: the two dimensional array
 *@height: height of the two dimensional array
 *
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

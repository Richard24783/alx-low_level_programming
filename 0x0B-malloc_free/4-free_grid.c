#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* free_grid - frees 2D grid created in alloc_grid.
* @grid: pointer to a pointer.
* @height: height of grid.
*
* Return: void.
*/

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}

	free(grid);
}

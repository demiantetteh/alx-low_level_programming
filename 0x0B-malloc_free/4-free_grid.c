#include <stlib.h>
#include "main.h"
#include <stdio.h>

/**
 * free_grid - frees the 2D grid previously created by alloc_grid
 * @grid: Pointer to 2D array
 * @height: Checks for the columns
 *
 * Return: Void
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}

#include <stdlib.h>

/**
 * free_grid - frees a 2D previously created by alloc_grid
 * @grid: pointer to the 2D grid to be freed
 * @height: height of the grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}

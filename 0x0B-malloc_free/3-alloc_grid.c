#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to 2 dimensional array of integers
 * @width: one of the int
 * @height: another integer
 *
 * Return: NULL on failure, if either of the int is (-) or 0 otherwise
 * a pointer if successful
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);

			return (NULL);
		}

		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}



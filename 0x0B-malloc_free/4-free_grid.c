#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2 dimentional grid previously created by alloc_grid
 * @grid: grid created
 * @height: height of the created grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

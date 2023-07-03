#include <stdlib.h>
/**
 * free_grid - frees memory
 * @grid: check pointers
 * @height: chek pointers 2
 *
 * Return: free (succelss)
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

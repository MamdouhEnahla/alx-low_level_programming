#include "main.h"

/**
 * free_grid - Check code
 * @grid: first arg
 * @height: second arg
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}

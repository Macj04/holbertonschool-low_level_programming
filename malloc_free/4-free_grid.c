#include "main.h"
/**
 * free_grid - free a 2 dimensional grid
 * @grid:grid
 * @height:height of the grid
 * Return: Always 0
 */
void free_grid(int **grid, int height)
{
	int m;

	for (m = 0; m < height; m++)
	{
		free(grid[m]);
	}
	free(grid);
}

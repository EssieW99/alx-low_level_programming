#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Creates a grid
 * @width: Width of grid
 * @height: Height of grid
 *
 * Return: Nothing
 */
int **alloc_grid(int width, int height);

/**
 * free_grid - Frees grid created
 * @grid: Grid that was created
 * @height: Height of grid
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

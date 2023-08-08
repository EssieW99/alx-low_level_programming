#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - A pointer to a two dimensional array of integers
 * @width: Width of the grid
 * @height: Height of the grid
 *
 * Return: Is NULL or value of ptr
 */
int **alloc_grid(int width, int height)
{
	int **ptr;

	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ptr = (int **)malloc(height * sizeof(int *));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *)malloc(width * sizeof(int));

		if (ptr[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(ptr[j]);
			}
		free(ptr);
		return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
	free(ptr);
}

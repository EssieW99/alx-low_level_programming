#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * @min: Minimum value
 * @max: Maximum value
 *
 * Return: Is NULL or the value of ptr
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, j;

	if (min > max)
	{
		return (NULL);
	}

	ptr = (int *)malloc(sizeof(int) * (max - min + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0, j = min; i < max - min + 1; i++, j++)
	{
		ptr[i] = j;

	}
	return (ptr);
}

#include "function_pointers.h"
#include <string.h>

/**
 * int_index - Searches for an integer
 * @array: Pointer to the array
 * @size: No. of elements
 * @cmp: Pointer to the function to compare values
 *
 * Return: Is -1 or an index numner
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}

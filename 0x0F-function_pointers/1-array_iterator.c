#include "function_pointers.h"
#include <string.h>

/**
 * array_iterator - Executes a function on each element of an array
 * @array: Pointer to the array
 * @size: Size of array
 * @action: Pointer to the function
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t s;

	if (array == NULL || action == NULL)
	{
		return;
	}
	if (size == 0)
	{
		return;
	}
	for (s = 0; s < size; s++)
	{
		action(array[s]);
	}
}

#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element in the array
 * @size: no. of elements in array
 * @value: value to search for
 * Return: is the value or -1
*/
int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	int i, mid;

	if (array == NULL)
	{
		return (-1);
	}

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i < right)
			{
				printf("%d, ", array[i]);
			}
			else
			{
				printf("%d", array[i]);
			}
		}
		printf("\n");
		mid = left + (right - left) / 2;
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	return (-1);
}

#include "main.h"

/**
 * set_bit - Setd value of a bit to 1 at an index
 * @n: A pointer to a usigned long int
 * @index: Index of the bit
 *
 * Return: Is 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL)
	{
		return (-1);
	}

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	else
	{
		*n |= (1UL << index);
		return (1);
	}
}

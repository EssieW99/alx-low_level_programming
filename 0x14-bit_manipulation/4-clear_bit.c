#include "main.h"

/**
 * clear_bit - Sets bit to 0
 * @n: Pointer to an int
 * @index: Index
 *
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int tmp;

	if (n == NULL)
	{
		return (-1);
	}

	if (index >= sizeof(unsigned int long) *8)
	{
		return (-1);
	}

	tmp = ~(1UL << index);

	*n &= tmp;
	return (1);
}

#include "main.h"

/**
 * get_bit - Returns the value of a bit at an index
 * @n: Number input
 * @index: Index of the binary
 *
 * Return: Value of bit or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int long tmp = n;
	unsigned int long i = 0;

	unsigned int long binary;

	if (n == 0)
	{
		return (-1);
	}

	while (tmp > 0)
	{
		tmp >>= 1;
		i++;
	}

	if (index > i - 1)
	{
		return (-1);
	}

	binary = 1UL << (index);

	return ((n & binary) ? 1 : 0);
}

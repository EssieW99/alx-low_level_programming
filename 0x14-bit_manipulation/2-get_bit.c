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

	unsigned int long binary;

	if (n == 0)
	{
		return (-1);
	}

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	binary = 1UL << (index);

	return ((n & binary) ? 1 : 0);
}

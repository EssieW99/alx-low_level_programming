#include "main.h"

/**
 * flip_bits - Returns the number of bits you would to flip
 * @n: Int one
 * @m: Int two
 *
 * Return: Value of count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0;

	unsigned long int value;

	if (n == 0 || m == 0)
	{
		return (0);
	}

	value = n ^ m;

	while (value > 0)
	{
		count += value & 1;
		value >>= 1;
	}

	return (count);
}

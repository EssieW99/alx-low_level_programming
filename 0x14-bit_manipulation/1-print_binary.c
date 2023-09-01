#include "main.h"

/**
 * print_binary - Prints the binary of a number
 * @n: number input
 *
 */
void print_binary(unsigned long int n)
{
	unsigned int long tmp = n;
	int i = 0;

	unsigned int long binary;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (tmp > 0)
	{
		tmp >>= 1;
		i++;
	}

	binary = 1UL << (i - 1);

	while (binary > 0)
	{
		if (n & binary)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		binary >>= 1;
	}
}

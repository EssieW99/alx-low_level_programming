#include "main.h"

/**
 * print_binary - Prints the binary of a number
 * @n: number input
 *
 */
void print_binary(unsigned long int n)
{

	if (n == 0)
	{
		_putchar('0');
	}

	while (n > 0)
	{
		if (n & 1)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		n >>= 1;
	}
}

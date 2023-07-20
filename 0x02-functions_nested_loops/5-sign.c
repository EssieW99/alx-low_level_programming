#include "main.h"

/**
 * print_sign - Starting point
 *@n: Number to be checked
 * Return: 1 if greater than zero, 0 if equal to zero and -1 if less that zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}
}

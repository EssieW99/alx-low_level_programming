#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns sum of its parameters
 * @n: Number of arguments
 *
 * Return: Is 0 or value of sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, x, sum;
	va_list args;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	sum = 0;

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		sum = sum + x;
	}
	va_end(args);

	return (sum);
}

#include "main.h"

/**
 * factorial - Returns the factorial of a number
 * @n: Number input
 *
 * Return: Is -1, 1 or the value of (n * factorial(n - 1))
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

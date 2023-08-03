#include "main.h"

/**
 * _pow_recursion - Returns value of x raised to the power of y
 * @x: Number input
 * @y: Number input
 *
 * Return: Is -1, 1 or the value of (n * _pow_recursion(x, y - 1))
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}

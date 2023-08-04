#include "main.h"

/**
 * function_helper - Returns natural square root of a number
 *@b: Root number
 *@a: Input number
 * Return: Is -1, a or the value of (function_helper(a + 1, b))
 */
int function_helper(int b, int a)
{
	if ((a * a) > b)
	{
		return (-1);
	}
	else if ((a * a) == b)
	{
		return (a);
	}
	else
	{
		return (function_helper(b, a + 1));
	}
}
/**
 * _sqrt_recursion - Returns natural square root of a number
 * @n: Squared number
 *
 * Return: Is -1, a or the value of (function helper(a + 1, b))
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (function_helper(n, 0));
	}
}

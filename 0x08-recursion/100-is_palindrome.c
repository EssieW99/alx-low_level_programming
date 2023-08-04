#include "main.h"
#include <string.h>

/**
 * function_helper - Finds if the characters match
 *@s: Input string
 *@a: Start index
 *@b: End index
 *
 * Return: Is 0, 1 or the value of (function_helper(s, a + 1, b - 1))
 */
int function_helper(char *s, int a, int b)
{
	if (a >= b)
	{
		return (1);
	}
	else if (s[a] != s[b])
	{
		return (0);
	}
	else
	{
		return (function_helper(s, a + 1, b - 1));
	}
}
/**
 * is_palindrome - Checks if  string is a palindrome
 * @s: Input string
 *
 * Return: Is 0, 1, value of (function_helper(s, 0, len - 1))
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len == 0)
	{
		return (1);
	}
	else
	{
		return (function_helper(s, 0, len - 1));
	}
}

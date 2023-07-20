#include "main.h"

/**
 * _isalpha - Checks if c is an alphabet
 * @c: The character to be checked
 *
 * Return: 1 if an alphabet and 0 if otherwise
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
		return (0);
}

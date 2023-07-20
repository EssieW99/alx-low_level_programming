#include "main.h"

/**
 *_isupper - Checks for an uppercase letter
 *@c: The character being checked
 *
 * Return: 1 if c is uppercase and 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}

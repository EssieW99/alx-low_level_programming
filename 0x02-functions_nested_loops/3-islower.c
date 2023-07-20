#include "main.h"

/**
 * _islower - Checks if c is lowercase
 *@c: The character to be checked
 * Return: 1 if lowercase and 0 if anything else
 */
int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}

		return (0);

}

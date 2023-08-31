#include "main.h"

/**
 * binary_to_uint - Converts a binary no. to unsign int
 * @b: String input
 *
 * Return: Converted no. or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int length, i;
	unsigned int value = 0;

	if (b == NULL)
	{
		return (0);
	}

	length = strlen(b);

	for (i = length - 1; i >= 0; i--)
	{
		if (b[i] == '0')
		{
			value += 0;
		}
		else if (b[i] == '1')
		{
			value += (1 << (length - 1 - i));
		}
		else
		{
			return (0);
		}
	}

	return (value);
}


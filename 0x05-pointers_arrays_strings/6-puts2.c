#include "main.h"

/**
 * puts2 - Prints every other character of a string, starts with the first one
 * @str: The string input
 *
 */
void puts2(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		if (len % 2 == 0)
		{
			_putchar(str[len]);
		}
		len++;
	}
	_putchar('\n');
}

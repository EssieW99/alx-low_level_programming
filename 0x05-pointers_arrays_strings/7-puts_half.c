#include "main.h"
#include <string.h>

/**
 * puts_half - Prints half a string followed by a new line
 *@str: Input of string
 *
 */
void puts_half(char *str)
{
	int length = strlen(str);
	int a = (length - 1) / 2;
	int i;

	for (i = (a + 1); i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

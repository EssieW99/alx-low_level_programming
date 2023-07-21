#include "main.h"

/**
 * print_diagonal - Draws a diagonal line
 *@n: The number of times the character \ should be printed
 *
 */
void print_diagonal(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

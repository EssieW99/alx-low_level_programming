#include "main.h"

/**
 * print_alphabet_x10 - Starting point
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int b, c;

	for (b = 0; b <= 10; b++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}


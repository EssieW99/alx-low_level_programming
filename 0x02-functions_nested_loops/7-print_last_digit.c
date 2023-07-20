#include "main.h"

/**
 *print_last_digit - Print the last digit
 *@n: Character being checked
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
	int g;

	g = n % 10;

	if (g < 0)
	{
		g = g * -1;
	}
	_putchar(g + '0');
	return (g);
}

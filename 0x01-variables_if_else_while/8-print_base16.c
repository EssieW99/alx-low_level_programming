#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)

	putchar(a + '0');

	for (b = 'a'; b <= 'f'; b++)

	putchar(b);
	putchar('\n');

	return (0);
}

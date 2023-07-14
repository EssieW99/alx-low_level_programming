#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int ab;

	for (ab = 'a'; ab <= 'z'; ab++)
	if (ab != 'e' && ab != 'q')

	putchar(ab);
	putchar('\n');

	return (0);
}

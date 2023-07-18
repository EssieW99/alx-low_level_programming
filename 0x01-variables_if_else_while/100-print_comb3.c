#include <stdio.h>

/**
 * main - Starting point
 *
 * Return: Always 0
 */
int main(void)
{
	int a, b;

	for (a = '0'; a <= 9; a++)
	{
		for (b = '0'; b <= 9; b++)
		{
			putchar(a + '0');
			putchar(b + '0');
			
			if (a != 8 || b != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	return (0);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints minimum number of coins as change
 * @argc: Counts number of command arguments
 * @argv: Array of command arguments
 *
 * Return: Is 0 or 1
 */
int main(int argc, char *argv[])
{
	int c;
	int c25;
	int c10;
	int c5;
	int c2;
	int c1;
	int total;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	c = atoi(argv[1]);

	if (c < 0)
	{
		printf("0\n");
	}

	c25 = c / 25, c = c % 25;

	c10 = c / 10, c = c % 10;

	c5 = c / 5, c = c % 5;

	c2 = c / 2, c = c % 2;

	c1 = c / 1, c = c % 1;

	total = c25 + c10 + c5 + c2 + c1;

	printf("%d\n", total);

	return (0);
}

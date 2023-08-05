#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds positive numbers
 * @argc: Counts the number of command arguments
 * @argv: Array of command arguments
 *
 * Return: Is 0 or 1
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	int j;

	for (i = 1; i < argc; i++)
	{
		char *ptr = argv[i];

		for (j = 0; ptr[j] != '\0'; j++)
		{
			if (!isdigit(ptr[j]))
			{
				printf("Error\n");
				return (1);
			}
		}
	sum = sum + atoi(ptr);
	}
	printf("%d\n", sum);

	return (0);
}

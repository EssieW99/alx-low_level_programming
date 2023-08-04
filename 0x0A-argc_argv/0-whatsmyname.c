#include <stdio.h>

/**
 * main - Prints own name
 *@argc: Counts number of command line arguements
 *@argv[]: Array containing command arguments
 *@argv: Contains command line arguements
 *
 * Return: Is 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

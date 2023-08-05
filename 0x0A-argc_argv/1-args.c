#include "main.h"
#include <stdio.h>

/**
 *main - Check the code
 *@argc: Counts number of command arguments
 *@argv: Array of command arguments
 *
 * Return: Is 0
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}

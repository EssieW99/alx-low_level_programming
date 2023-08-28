#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - Concatenates all the arguments of a program
 * @ac: Argument count
 * @av: Argument vector
 *
 * Return: A pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, j;
	int length, argument = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		length += strlen(av[i]) + 1;
	}

	ptr = (char *)malloc(length + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ptr[argument++] = av[i][j];
		}
		ptr[argument++] = '\n';
	}
	ptr[argument++] = '\0';

	return (ptr);
}

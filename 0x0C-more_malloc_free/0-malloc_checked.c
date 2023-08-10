#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory
 * @b: Data input
 *
 * Return: Is 98 or value of ptr
 */
void *malloc_checked(unsigned int b)
{

	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}

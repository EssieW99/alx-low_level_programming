#include "main.h"

/**
 * get_endianness - Checks the endianness
 *
 * Return: Is 0 or 1
 */
int get_endianness(void)
{
	unsigned int i = 1;
	unsigned char *value = (unsigned char *)&i;

	return ((int)(*value));
}

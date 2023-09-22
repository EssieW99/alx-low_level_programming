#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: Where memory will be copied to
 * @src: Where memory will be copied from
 * @n: Number of bytes of memory
 *
 * Return: Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

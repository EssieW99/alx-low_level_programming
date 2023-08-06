#include "main.h"

/**
 * _memset - Fills memory with constant byte
 * @s: Points to the memory area
 * @b: The buffer
 * @n: The number of bytes
 *
 * Return: Is the value of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

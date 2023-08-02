#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: One of the strings
 * @src: The other string
 * @n: Number of bytes
 *
 * Return: Is result
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *result = dest;

	while (*src != 0 && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (result);
}

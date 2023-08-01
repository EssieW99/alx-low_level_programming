#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: One of the strings
 * @src: The other string
 * @n: Number of bytes
 *
 * Return: Is return
 */
char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';

	return (result);

}

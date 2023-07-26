#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src
 *@dest: The buffer pointer
 *@src: The string input
 *
 * Return: Value of dest
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_ptr = dest;

	while (*src != '\0')
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
	}
	*dest_ptr = '\0';

	return (dest);
}

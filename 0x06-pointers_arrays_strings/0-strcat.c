#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: One of the strings
 * @src: The other string
 *
 * Return: Is result
 */
char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (result);

}

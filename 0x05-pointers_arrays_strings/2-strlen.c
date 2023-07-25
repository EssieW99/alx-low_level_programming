#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: The value of a dereferencing pointer
 *
 *Return: Value of len
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	len++;
	return (len);
}

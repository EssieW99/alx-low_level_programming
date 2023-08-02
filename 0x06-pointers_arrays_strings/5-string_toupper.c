#include "main.h"

/**
 * string_toupper - Changes lowercase letters in a string to uppercase
 *@x: The string
 *
 * Return: Is ptr
 */
char *string_toupper(char *x)
{
	char *ptr = x;

	while (*x != '\0')
	{
		if (*x >= 'a' && *x <= 'z')
		{
			*x = (*x - 'a') + 'A';
		}
		x++;
	}
	return (ptr);
}

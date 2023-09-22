#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: Input string
 * @c: Character being located
 *
 * Return: A pointer to the first occurrence of c or NULL
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*s != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return ('\0');
}

#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: Input string
 * @accept: String to search for
 *
 * Return: A pointer to the byte in s that matches
 * one in accept or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}

#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: One of the strings
 * @s2: The other string
 *
 * Return: The value of (*s1 > *s2) ? 15 : -15 or 0;
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return ((*s1 > *s2) ? 15 : -15);
		}
	s1++;
	s2++;
	}
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (0);
	}
	else
	{
		return ((*s1 > *s2) ? 15 : -15);
	}
}

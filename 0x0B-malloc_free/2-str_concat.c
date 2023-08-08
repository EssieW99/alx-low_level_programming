#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings
 * @s1: One of the strings
 * @s2: The other string
 *
 * Return: Is NULL or the value of ptr
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;

	unsigned int length1, length2;

	unsigned int i;

	if (s1 == NULL)
	{
		s1 = ("");
	}
	else if (s2 == NULL)
	{
		s2 = ("");
	}

	length1 = strlen(s1);

	length2 = strlen(s2);

	ptr = (char *)malloc(length1 + length2 + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= length1; i++)
	{
		ptr[i] = s1[i];
	}
	for (i = 0; i <= length2; i++)
	{
		ptr[length1 + i] = s2[i];
	}
	ptr[length1 + length2] = '\0';

	return (ptr);
	free(ptr);
}

#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: String input
 * @s2: String input
 * @n: Number of bytes
 *
 *Return: Is NULL or the value of ptr
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int length1, length2;
	unsigned int i;

	if (s1 == NULL)
	{
		s1 = ("");
	}
	if (s2 == NULL)
	{
		s2 = ("");
	}

	length1 = strlen(s1);
	length2 = strlen(s2);

	if (n >= length2)
	{
		n = length2;
	}

	ptr = (char *)malloc(length1 + n + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= length1; i++)
	{
		ptr[i] = s1[i];
	}

	for (i = 0; i <= n; i++)
	{
		ptr[length1 + i] = s2[i];
	}
	ptr[length1 + n] = '\0';
	return (ptr);

}

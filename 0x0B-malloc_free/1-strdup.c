#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Returns a pointer to a new string
 * @str: String input
 *
 * Return: Is NULL or value of ptr
 */
char *_strdup(char *str)
{
	size_t length, i;

	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	length = strlen(str);

	ptr = (char *)malloc(length + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= length; i++)
	{
		ptr[i] = str[i];
	}

	return (ptr);

	free(ptr);
}

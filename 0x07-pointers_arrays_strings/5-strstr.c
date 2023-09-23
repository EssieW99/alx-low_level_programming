#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: Input string
 * @needle: Substring to be located
 *
 * Return: Pointer to the beginning of the located substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
				{
				return (haystack);
				}
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}

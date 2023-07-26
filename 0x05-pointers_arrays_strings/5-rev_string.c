#include "main.h"
#include <string.h>

/**
 * rev_string - Reverses a string
 * @s: String input to be reversed
 *
 * Return: Value of (s[d])
 */
void rev_string(char *s)
{
	int length = strlen(s);
	int middle = length / 2;
	int i;
	int temp;

	for (i = 0; i < middle; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}

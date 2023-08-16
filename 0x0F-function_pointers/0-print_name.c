#include "function_pointers.h"
#include <string.h>

/**
 * print_name - Prints a name
 * @name: String input of the name
 * @f: A pointer
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}

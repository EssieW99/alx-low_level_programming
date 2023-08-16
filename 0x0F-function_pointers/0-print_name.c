#include "function_pointers.h"
#include <string.h>
#include <stdio.h>

/**
 * print_name - Prints a name
 * @name: String input of the name
 * @f: A pointer
 *
 */
void print_name(char *name, void (*f)(char *))
{
		f(name);
		putchar('\n');
}

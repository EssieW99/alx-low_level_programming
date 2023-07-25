#include "main.h"

/**
 * swap_int - Swaps the value of two integers
 * @a: Value of the dereferencing pointer
 * @b: Value of the dereferencing pointer
 *
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

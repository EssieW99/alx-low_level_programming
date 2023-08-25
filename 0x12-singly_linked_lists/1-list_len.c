#include "lists.h"

/**
 * list_len - Return the number of elements in a linked list
 * @h: Pointer to the data in the linked list
 *
 * Return: No. of elements
 */
size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

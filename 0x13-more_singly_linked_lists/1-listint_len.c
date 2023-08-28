#include "lists.h"

/**
 * listint_len - Returns no. of elements
 * @h: A pointer to the next node
 *
 * Return: No. of elements
 */
size_t listint_len(const listint_t *h)
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

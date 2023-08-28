#include "lists.h"

/**
 * print_listint - Prints all the elements
 * @h: Pointer to the first node
 *
 * Return: No of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}

#include "lists.h"

/**
 * print_list - Prints all the elements
 * @h: Pointer to the node
 *
 * Return: Is value of n
 */
size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		if (h->str == NULL)
		{
		printf("[0] (nil)\n");
		}
		else
		{	printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}

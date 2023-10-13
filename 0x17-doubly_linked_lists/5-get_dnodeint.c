#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node in a list
 * @head: Pointer to the head
 * @index: Index of the node
 *
 * Return: Index of the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp = head;

	if (temp != NULL)
	{
		if (count == index)
		{
			return (temp);
		}
		temp = temp->next;
		count++;
	}
	return (NULL);
}

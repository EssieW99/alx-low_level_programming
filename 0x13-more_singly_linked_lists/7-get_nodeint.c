#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a linked lists
 * @head: A pointer to the first node
 * @index: Index of the node
 *
 * Return: The nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *tmp = head;

	while (tmp != NULL)
	{
		if (count == index)
		{
			return (tmp);
		}
		tmp = tmp->next;
		count++;
	}
	return (NULL);
}

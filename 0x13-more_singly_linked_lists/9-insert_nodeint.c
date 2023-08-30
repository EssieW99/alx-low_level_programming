#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: A pointer to pointer
 * @idx: Index where the new node will be added
 * @n: Data input
 *
 * Return: Address of the new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp;
	unsigned int count;

	listint_t *newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	tmp = *head;
	for (count = 0; count < idx - 1; count++)
	{
		if (tmp == NULL)
		{
			return (NULL);
		}
		tmp = tmp->next;
	}
	if (tmp != NULL)
	{
		newnode->next = tmp->next;
		tmp->next = newnode;
		return (newnode);
	}
	else
	{
		return (NULL);
	}
}

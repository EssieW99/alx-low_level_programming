#include "lists.h"

/**
 * * insert_dnodeint_at_index - inserts a node at a given position
 * @h: Double pointer to the first node
 * @idx: The position the node needs to be inserted at
 * @n: Data in the node
 *
 * Return: Address of the new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *newnode, *temp = *h;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->prev = NULL;
	newnode->n = n;
	newnode->next = NULL;
	if (idx == 0)
	{
		newnode->next = temp;
		if (temp != NULL)
			temp->prev = newnode;
		*h = newnode;
		return (newnode);
	}
	for (i = 0; i < idx; i++)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
	}
	if (temp->next == NULL && i == idx - 1)
	{
		newnode->prev = temp;
		newnode->next = NULL;
		temp->next = newnode;
		return (newnode);
	}
	else if (temp->next != NULL)
	{
		newnode->prev = temp;
		newnode->next = temp->next;
		temp->next->prev = newnode;
		temp->next = newnode;
		return (newnode);
	}
	return (NULL);
}

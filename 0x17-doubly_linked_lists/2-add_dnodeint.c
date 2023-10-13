#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of the list
 * @head: Pointer to the head
 * @int: data in the node
 *
 * Return: returns address to the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->prev = NULL;
	newnode->n = n;
	newnode->next = NULL;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}

#include "lists.h"

/**
 * add_dnodeint_end - adds new node at the end of the list
 * @n: Integer value in the node
 * @head: pointer to pointer to the head
 *
 * Return: address of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *temp = *head;

	if (head == NULL)
	{
		return (NULL);
	}
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->prev = NULL;
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newnode;
	temp->prev = temp;
	return (newnode);
}

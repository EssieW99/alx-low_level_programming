#include "lists.h"

/**
 * pop_listint - Deletes the head node
 * @head: A poiter to pointer to the head node
 *
 * Return: Value of head node data or 0
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int new;

	if (*head == NULL)
	{
		return (0);
	}

	new = (*head)->n;
	tmp = *head;
	*head = (*head)->next;

	free(tmp);

	return (new);
}

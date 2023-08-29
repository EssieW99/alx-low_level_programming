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
	listint_t *new;

	if (*head == NULL)
	{
		return (0);
	}

	tmp = *head;
	*head = (*head)->next;
	free(tmp);

	new = *head;
	while (new->next != NULL)
	{
		printf("%d\n", new->n);
		new = new->next;
	}

	return (new->n);
}

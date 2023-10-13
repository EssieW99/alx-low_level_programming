#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: Pointer to the first node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *newnode;

	while (head != NULL)
	{
		newnode = head;
		head = head->next;
		free(newnode);
	}
}

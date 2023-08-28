#include "lists.h"

/**
 * free_listint - Frees a listint
 * @head: A pointer to the first node
 *
 */
void free_listint(listint_t *head)
{
	listint_t *newnode;

	while (head != NULL)
	{
		newnode = head;
		head = head->next;

		free(newnode);
	}
}

#include "lists.h"

/**
 * free_list - Frees a list_t list
 * @head: A pointer to a node
 *
 */
void free_list(list_t *head)
{
	struct list_s *newnode;

	while (head != NULL)
	{
		newnode = head;
		head = head->next;

		free(newnode->str);

		free(newnode);
	}
}

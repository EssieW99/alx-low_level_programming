#include "lists.h"

/**
 * add_node_end - Adds a node at the end of the list
 * @head: A pointer to a pointer
 * @str: Input string
 *
 * Return: Address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{

	struct list_s *newnode = (struct list_s *)malloc(sizeof(struct list_s));

	struct list_s *tmp = *head;

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->str = strdup(str);
	
	if (newnode->str == NULL)
	{
		return (NULL);
	}
	newnode->len = strlen(str);
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = newnode;

	return (newnode);
}

#include "lists.h"

/**
 * add_node - Adds a new node at the beginning
 * @head: A pointer to pointer
 * @str: String input
 *
 * Return: Address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	struct list_s *newnode = (struct list_s *)malloc(sizeof(struct list_s));

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->str = strdup(str);
	newnode->len = strlen(str);
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}

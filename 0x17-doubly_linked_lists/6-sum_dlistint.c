#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data in a linked list
 * @head: Pointer to the first node
 *
 * Return: Sum of data or 0
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	unsigned int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}

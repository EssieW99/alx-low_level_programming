#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data in a list
 * @head: The pointer to the first node
 *
 * Return: The value of sum
 */
int sum_listint(listint_t *head)
{
	unsigned int sum = 0;
	listint_t *tmp = head;

	if (head == NULL)
	{
		return (0);
	}

	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}

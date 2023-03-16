#include "lists.h"

/**
 * sum_dlistint - Calculates the sum of all the data (n) of a dlistint_t list
 *
 * @head: Pointer to the head of the list
 *
 * Return: The sum of all the data, 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *iter;

	sum = 0;
	iter = head;
	if (head == (void *) 0)
		return (0);
	while (iter != (void *) 0)
	{
		sum += iter->n;
		iter = iter->next;
	}
	return (sum);
}

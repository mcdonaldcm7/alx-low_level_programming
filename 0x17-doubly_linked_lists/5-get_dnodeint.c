#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list
 *
 * @head: Pointer to the head of the list
 * @index: Index of node to return
 *
 * Return: Pointer to node at index, or NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	int count;
	dlistint_t *iter;

	iter = head;
	count = 0;
	if (head == (void *) 0)
		return (head);
	while (iter->next != (void *) 0)
	{
		if (count == index)
			return (iter);
		iter = iter->next;
		count++;
	}
	return ((void *) 0);
}

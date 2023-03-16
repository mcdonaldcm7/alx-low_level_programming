#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at index of a dlistint_t list
 *
 * @head: Pointer to the head of the list
 * @index: Index of the node that shouldbe deleted, Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count;
	dlistint_t *iter;

	iter = *head;
	count = 0;
	if (head == (void *) 0 || *head == (void *) 0)
		return (-1);
	while (iter != (void *) 0)
	{
		if (count == index)
		{
			if (iter->prev != (void *) 0)
				iter->prev->next = iter->next;
			if (iter->next != (void *) 0)
				iter->next->prev = iter->prev;
			if (index == 0)
				*head = iter->next;
			free(iter);
			return (1);
		}
		iter = iter->next;
		count++;
	}
	return (-1);

}

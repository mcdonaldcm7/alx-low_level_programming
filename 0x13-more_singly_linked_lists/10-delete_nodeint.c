#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes a node at a given position
 *
 * @head: Pointer to the head of the listint_t linked list
 * @index: Index of the list where the new node should be added(Starts at 0)
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *prev_node, *navg;

	if (head == (void *) 0 || *head == (void *) 0)
		return (-1);
	navg = *head;
	if (index == 0)
	{
		prev_node = *head;
		*head = (*head)->next;
		free(prev_node);
		return  (1);
	} else if (index > 0)
	{
		for (i = 0; i < (index - 1) && navg != (void *) 0; i++,
				navg = navg->next)
			continue;
		prev_node = navg->next;
		navg->next = (navg->next)->next;
		free(prev_node);
		return (1);
	}
	return (-1);
}

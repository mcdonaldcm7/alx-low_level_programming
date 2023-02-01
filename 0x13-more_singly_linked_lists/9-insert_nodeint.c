#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 *
 * @head: Pointer to the head of the listint_t linked list
 * @idx: Index of the list where the new node should be added(Starts at 0)
 * @n: Data of the new node
 *
 * Return: Address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *n_node, *navg;

	if (head == (void *) 0)
		return ((void *) 0);
	n_node = malloc(sizeof(n_node));
	if (n_node == ((void *) 0))
		return ((void *) 0);
	navg = *head;
	if (idx == 0)
	{
		n_node->n = n;
		n_node->next = *head;
		*head = n_node;
		return (n_node);
	} else if (idx > 0)
	{
		for (i = 0; i < (idx - 1) && navg != (void *) 0 && navg->next
				!= (void *) 0; i++, navg = navg->next)
			continue;
		if (navg == (void *) 0)
		{
			free(n_node);
			return ((void *) 0);
		}
		n_node->n = n;
		n_node->next = navg->next;
		navg->next = n_node;
		return (n_node);
	}
	return ((void *) 0);
}

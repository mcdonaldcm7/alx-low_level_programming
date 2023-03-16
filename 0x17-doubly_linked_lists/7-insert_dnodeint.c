#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Insert a new node at a given position
 *
 * @h: Pointer to the head of the list
 * @idx: Index to insert the new node
 * @n: Integer value to assign to te new node
 *
 * Return: Address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count;
	dlistint_t *iter, *new;

	count = 0;
	iter = *h;
	if (h == (void *) 0 || *h == (void *) 0)
		return ((void *) 0);
	while (iter != (void *) 0)
	{
		if (count == idx)
		{
			new = malloc(sizeof(*new));
			if (new == (void *) 0)
				return (new);
			new->n = n;
			new->prev = iter->prev;
			new->prev->next = new;
			iter->prev = new;
			new->next = iter;
			return (new);
		}
		iter = iter->next;
		count++;
	}
	return ((void *) 0);
}

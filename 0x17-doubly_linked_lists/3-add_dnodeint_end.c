#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list
 *
 * @head: Pointer to the head of the list
 * @n: Integer value to assign to new node
 *
 * Return: Address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *iter;

	iter = *head;
	new = malloc(sizeof(*new));
	if (new == (void *) 0)
		return (new);
	while (*iter)
	{
		iter = iter->next;
	}
	new->n = n;
	new->next = (void *) 0;
	new->prev = iter->prev;
	new->prev->next = new;
	return (new);
}

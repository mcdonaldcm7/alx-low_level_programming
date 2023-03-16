#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

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
	dlistint_t *iter, *new;

	new = malloc(sizeof(*new));
	if (new == (void *) 0)
		return (new);
	new->n = n;
	new->next = (void *) 0;
	if (head != (void *) 0 && *head != (void *) 0)
	{
		iter = *head;
		while (iter->next != (void *) 0)
		{
			iter = iter->next;
		}
		new->prev = iter;
		iter->next = new;
	} else
	{
		new->prev = (void *) 0;
		*head = new;
	}
	return (new);
}

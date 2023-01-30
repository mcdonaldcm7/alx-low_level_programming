#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list
 *
 * @head: Pointer to the head of the listint_t list
 * @n: Integer value for the new node
 *
 * Return: Address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *i;

	new = malloc(sizeof(new));
	if (new == ((void *) 0))
		return ((void *) 0);
	new->n = n;
	new->next = (void *) 0;
	if (*head == ((void *) 0))
	{
		*head = new;
	} else
	{
		for (i = *head; i->next != (void *) 0; i = i->next)
			continue;
		i->next = new;
	}
	return (new);
}

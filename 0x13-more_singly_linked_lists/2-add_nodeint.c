#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list
 *
 * @head: Pointer to the head of the listint_t list
 * @n: Integer value to initialize listint_t n with.
 *
 * Return: The address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(new));
	if (new == ((void *) 0))
		return ((void *) 0);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}

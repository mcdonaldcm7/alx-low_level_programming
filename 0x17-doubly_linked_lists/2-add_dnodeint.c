#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list
 *
 * @head: Pointer to the head of the dlistint_t list
 * @n: Integer value to assign to new node
 *
 * Return: Address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nhead;

	nhead = malloc(sizeof(*nhead));
	if (nhead == (void *) 0)
		return (nhead);
	nhead->n = n;
	if (head == (void *) 0 || *head == (void *) 0)
	{
		nhead->next = (void *) 0;
	} else
	{
		nhead->next = *head;
	}
	nhead->prev = (void *) 0;
	*head =  nhead;
	return (nhead);
}

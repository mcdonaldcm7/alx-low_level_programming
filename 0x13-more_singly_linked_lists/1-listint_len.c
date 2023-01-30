#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list.
 *
 * @h: Pointer to the head of the list
 *
 * Return: Number of elements in h
 */
unsigned int listint_len(const listint_t *h)
{
	if (h == ((void *) 0))
		return (0);
	if (h->next == ((void *) 0))
		return (1);
	return (1 + listint_len(h->next));
}

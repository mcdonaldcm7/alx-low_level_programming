#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t list.
 *
 * @h: Pointer to the head of the list
 *
 * Return: Number of elements in h
 */
unsigned int list_len(const list_t *h)
{
	if (h == ((void *) 0))
		return (0);
	if (h->next == ((void *) 0))
		return (1);
	return (1 + list_len(h->next));
}

#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements of a listint_t list
 *
 * @h: Pointer to the head of the list
 *
 * Return: Number of nodes
 */
unsigned int print_listint(const listint_t *h)
{
	if (h != ((void *) 0))
	{
		printf("%d\n", h->n);
	} else
		return (0);
	if (h->next == ((void *) 0))
	{
		return (1);
	}
	return (1 + print_listint(h->next));
}

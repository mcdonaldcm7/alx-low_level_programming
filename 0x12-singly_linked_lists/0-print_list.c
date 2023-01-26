#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of a list_t list
 *
 * @h: Pointer to the head of the list
 *
 * Return: Number of nodes
 */
unsigned int print_list(const list_t *h)
{
	if (h != ((void *) 0))
	{
		if (h->str != ((void *) 0))
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
	} else
		return (0);
	if (h->next == ((void *) 0))
	{
		return (1);
	}
	return (1 + print_list(h->next));
}

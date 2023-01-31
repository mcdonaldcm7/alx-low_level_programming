#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 *
 * @head: Pointer to the head of the listint_t linked list
 * @idx: Index of the list where the new node should be added(Starts at 0)
 * @n: Data of the new node
 *
 * Return: Address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new, *navg;

	i = 0;
	if (head == (void *) 0)
		return ((void *) 0);
	new = malloc(sizeof(new));
	if (new == ((void *) 0))
		return ((void *) 0);
	new->n = n;
	navg = *head;
	while (navg != ((void *) 0))
	{
		if (idx == 0 && i == 0)
		{
			new->next = navg;
			*head = new;
			break;
		}
		if (navg->next != (void *) 0 && (idx > 0 && (i == (idx - 1))))
		{
			new->next = navg->next;
			navg->next = new;
			break;
		}
		i++;
		navg = navg->next;
	}
	return (new);
}

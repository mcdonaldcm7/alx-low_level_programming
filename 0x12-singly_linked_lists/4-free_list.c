#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a list_t list
 *
 * @head: Pointer to the head of the list
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *rmv;

	if (head == ((void *) 0))
		return;
	while (head->next != ((void *) 0))
	{
		rmv = head;
		head = head->next;
		free(rmv);
	}
	free(head);
}

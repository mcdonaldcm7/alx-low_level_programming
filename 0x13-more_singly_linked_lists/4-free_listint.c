#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees a listint_t list
 *
 * @head: Pointer to the head of the list
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *rmv;

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

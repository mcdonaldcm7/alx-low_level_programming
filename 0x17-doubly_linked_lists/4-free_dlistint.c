#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list
 *
 * @head: Pointer to the head of the list
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	tmp = (void *) 0;
	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}

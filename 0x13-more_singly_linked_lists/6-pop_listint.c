#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head of a node of a listint_t linked list
 *
 * @head: Pointer to the head of the list
 *
 * Return: Head's node data
 */
int pop_listint(listint_t **head)
{
	listint_t *rmv;
	int data;

	if (head == ((void *) 0) || *head == ((void *) 0))
		return (0);
	rmv = *head;
	data = rmv->n;
	*head = (*head)->next;
	free(rmv);
	return (data);
}

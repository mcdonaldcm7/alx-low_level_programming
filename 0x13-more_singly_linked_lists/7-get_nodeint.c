#include "lists.h"

/**
 * get_nodeint_at_index: Returns the nth node of a listint_t linked list.
 *
 * @head: Pointer to the head of the node
 * @index: Index of the node to be retrieved
 *
 * Return: index node of the listint_t pointed to by head, 0r NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == ((void *) 0))
		return ((void *) 0);
	i = 0;
	while (head->next != ((void *) 0))
	{
		if (i == index)
			break;
		head = head->next;
		i++;
	}
	if (i == index)
		return (head);
	return ((void *) 0);
}

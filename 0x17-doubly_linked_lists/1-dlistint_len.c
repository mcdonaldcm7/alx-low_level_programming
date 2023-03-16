#include "lists.h"

/**
 * dlistint_len - Returns the number of element in a dlistint_t linked list
 *
 * @h: Pointer to the head of the list
 *
 * Return: The number of nodes
 */
unsigned int dlistint_len(const dlistint_t *h)
{
	unsigned int count;
	const dlistint_t *iter;

	count = 0;
	iter = h;
	while (iter)
	{
		iter = iter->next;
		count++;
	}
	return (count);
}

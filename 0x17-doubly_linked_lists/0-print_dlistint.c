#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Prints all the element of a dlistint_t list
 *
 * @h: Pointer to the head of the list
 *
 * Return: The number of nodes
 */
unsigned int print_dlistint(const dlistint_t *h)
{
	unsigned int count;
	const dlistint_t *iter;

	count = 0;
	iter = h;
	while (iter)
	{
		printf("%d\n", iter->n);
		iter = iter->next;
		count++;
	}
	return (count);
}

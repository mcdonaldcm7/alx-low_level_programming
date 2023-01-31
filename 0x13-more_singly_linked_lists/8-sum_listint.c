#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data(n) of a listint_t linked list
 *
 * @head: Pointer to the head of the node
 *
 * Return: Sum of all data in the listint_t linked list
 */
int sum_listint(listint_t *head)
{
	int sum;

	if (head == ((void *) 0))
		return (0);
	sum = 0;
	while (head != ((void *) 0))
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

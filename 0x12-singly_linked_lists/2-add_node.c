#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * lq_strlen - Returns the length of a string
 *
 * @s: Input string
 *
 * Return: Length of s
 */
int lq_strlen(const char *s)
{
	if (s == NULL || s[0] == '\0')
		return (0);
	return (1 + lq_strlen(&s[1]));
}

/**
 * add_node - Adds a new node at the beginning of a list_t list
 *
 * @head: Pointer to the head of the list_t list
 * @str: String for the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(new));
	if (new == ((void *) 0))
		return ((void *) 0);
	new->str = strdup(str);
	new->len = lq_strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}

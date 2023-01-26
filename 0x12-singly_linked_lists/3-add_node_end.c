#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * lq_strlen - Returns the length of the string s
 *
 * @s: Input string
 *
 * Return: Length of s
 */
int lq_strlen(const char *s)
{
	if (s == ((void *) 0) || s[0] == '\0')
		return (0);
	return (1 + lq_strlen(&s[1]));
}

/**
 * add_node_end - Adds a new node at the end of a list_t list
 *
 * @head: Pointer to the head of the list_t list
 * @str: String value for the new node
 *
 * Return: Address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end;
	list_t *new;
	int i;

	new = malloc(sizeof(new));
	if (new == ((void *) 0))
		return ((void *) 0);
	new->str = strdup(str);
	new->len = lq_strlen(str);
	new->next = (void *) 0;
	for (i = 0; head[i]->next != ((void *) 0); i++);
	end = head[i];
	end->next = new;
	return (new);
}

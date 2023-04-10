#include "hash_tables.h"
#include <stdlib.h>

/**
 * _strlen - Gets the length of a string excluding the null terminating byte
 *
 * @s: Input string
 *
 * Return: Length of s
 */
unsigned int _strlen(const char *s)
{
	if (s == (void *) 0 || s[0] == '\0')
		return (0);
	return (1 + _strlen(&s[1]));
}

/**
 * _strcpy - Returns a copy of a string
 *
 * @s: Input string
 *
 * Return: A duplicate of s
 */
char *_strcpy(const char *s)
{
	char *cpy;
	unsigned int len, i;

	len = _strlen(s);
	cpy = malloc((sizeof(*cpy) * len) + 1);
	if (cpy == (void *) 0)
		return (cpy);
	for (i = 0; i < len; i++)
	{
		cpy[i] = s[i];
	}
	cpy[i] = '\0';
	return (cpy);
}

/**
 * _strcmp - Compares two input strings
 *
 * @s1: First Input string
 * @s2: Second Input string
 *
 * Return: -2 if s1 and s2 have varying length, 0 if they are equal, 1 if s1
 * is greater than s2, -1 if s2 is greater than s3
 */
int _strcmp(const char *s1, const char *s2)
{
	unsigned int len1, len2, i;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (len1 != len2)
		return (-2);
	for (i = 0; i < len1; i++)
	{
		if (s1[i] > s2[i])
			return (1);
		if (s1[i] < s2[i])
			return (-1);
	}
	return (0);
}

/**
 * hash_table_set - Adds an element to the hash table
 *
 * @ht: The hash_table to add or update the key/value to
 * @key: Keys
 * @value: Value associated with the key
 *
 * Return: 1 it it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t **at_index, *tmp;

	if (key == (void *) 0 || _strlen(key) == 0)
		return (0);
	index = key_index((unsigned char *) key, ht->size);
	tmp = malloc(sizeof(*tmp));
	if (tmp == (void *) 0)
		return (0);
	tmp->key = _strcpy(key);
	tmp->value = _strcpy(value);
	at_index = &ht->array[index];
	if (*at_index == (void *) 0)
	{
		tmp->next = (void *) 0;
		*at_index = tmp;
	} else
	{
		if (_strcmp((*at_index)->key, key) == 0)
		{
			(*at_index)->value = _strcpy(value);
			free(tmp);
		} else
		{
			tmp->next = *at_index;
			*at_index = tmp;
		}
	}
	return (1);
}

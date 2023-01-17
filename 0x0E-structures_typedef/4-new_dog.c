#include "dog.h"
#include <stdlib.h>

/**
 * lq_strlen - gets the length of a string
 *
 * @s: input string
 *
 * Return: length of s
 */
int lq_strlen(char *s)
{
	if (s == NULL || s[0] == '\0')
		return (0);
	return (1 + lq_strlen(&s[1]));
}

/**
 * new_dog - Creates a new dog
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: Pointer to newly instantiated dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *nme, *ownr;
	dog_t *ret;
	int index;

	nme = malloc(sizeof(*nme) * lq_strlen(name) + 1);
	ownr = malloc(sizeof(*ownr) * lq_strlen(owner) + 1);
	ret = malloc(sizeof(*ret));
	index = 0;
	if (ret != NULL)
	{
		while (name[index] != '\0')
		{
			nme[index] = name[index];
			index++;
		}
		nme[index] = '\0';
		index = 0;
		while (owner[index] != '\0')
		{
			ownr[index] = owner[index];
			index++;
		}
		ownr[index] = '\0';
		ret->name = nme;
		ret->owner = ownr;
		ret->age = age;
		return (ret);
	}
	return (NULL);
}

#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees dog
 *
 * @d: pointer to the dog
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}

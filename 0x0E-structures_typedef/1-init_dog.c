#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initializes a variable of type struct dog
 *
 * @d: struct dog to initialize
 * @name: dog's name to initialize d member name variable with
 * @age: dog's age to initialize d member age variable with
 * @owner: owner's name to initialize d memeber owner variable with
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}

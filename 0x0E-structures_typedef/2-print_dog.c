#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 *
 * @d: struct dog to print
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
	if (d->age >= 0)
		printf("Age: %f\n", d->age);
	else
		printf("Age: (nil)");
	printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
}

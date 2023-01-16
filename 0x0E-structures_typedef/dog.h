#ifndef DOG_H
#define DOG_H
/**
 * struct dog - A C structure representing a dog
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *, char *, float, char *);
void print_dog(struct dog *);
#endif

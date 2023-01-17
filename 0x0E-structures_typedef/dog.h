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
typedef struct dog dog_t;
dog_t *new_dog(char *, float, char *);
void free_dog(dog_t *);
#endif

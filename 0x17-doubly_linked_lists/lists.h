#ifndef LISTS_H
#define LISTS_H
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 *
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

unsigned int print_dlistint(const dlistint_t *);
unsigned int dlistint_len(const dlistint_t *);
dlistint_t *add_dnodeint(dlistint_t **, const int);
dlistint_t *add_dnodeint_end(dlistint_t **, const int);
void free_dlistint(dlistint_t *);
dlistint_t *get_dnodeint_at_index(dlistint_t *, unsigned int);
int sum_dlistint(dlistint_t *);
#endif

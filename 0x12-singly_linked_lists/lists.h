#ifndef LISTS_H
#define LISTS_H
/**
 * struct list_s - singly linked list
 *
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

int _putchar(char);
unsigned int print_list(const list_t *);
unsigned int list_len(const list_t *);
list_t *add_node(list_t **, const char *);
list_t *add_node_end(list_t **, const char *);
void free_list(list_t *);
void before_main() __attribute__((constructor));
#endif

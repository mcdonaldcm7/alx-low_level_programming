#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
int _putchar(char);
void print_name(char *, void (*)(char *));
void array_iterator(int *, unsigned int, void (*)(int));
int int_index(int *, int, int (*)(int));
#endif

#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
/**
 * struct opr - Struct opr
 *
 * @fmt: The format to print
 * @print_int: Function to print integers
 * @print_char: Function to print characters
 * @print_float: Function to print float
 * @print_str: Function to print strings
 */
typedef struct opr
{
	char fmt;
	void print_int(int);
	void print_char(char);
	void print_float(float);
	void print_str(char *);
} opr_t;
int _putchar(char);
int sum_them_all(const unsigned int, ...);
void print_numbers(const char *, const unsigned int, ...);
void print_strings(const char *, const unsigned int, ...);
#endif

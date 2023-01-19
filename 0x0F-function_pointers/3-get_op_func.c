#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - Selects the correct function to perform the operation asked
 *
 * @s: Operator passed as argument to the program
 *
 * Return: Pointer to the function that corresponds to the operator s
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL && ops[i].f != NULL)
	{
		if (ops[i].op[0] == s[0])
			return (ops[i].f);
		i++;
	}
	return (NULL);
}

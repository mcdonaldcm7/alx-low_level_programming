#include "3-calc.h"

/**
 * op_add - Computes the sum of a and b
 *
 * @a: Input integer
 * @b: Input integer
 *
 * Return: Sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Computes the subtraction of a and b
 *
 * @a: Input integer
 * @b: Input integer
 *
 * Return: Subtraction of b from a
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Computes multiplication of a and b
 *
 * @a: Input integer
 * @b: Input integer
 *
 * Return: Product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Computes division of a by b
 *
 * @a: Input integer
 * @b: Input integer
 *
 * Return: a divided by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Computes the remainder of the division of a by b
 *
 * @a: Input integer
 * @b: Input integer
 *
 * Return: Remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}

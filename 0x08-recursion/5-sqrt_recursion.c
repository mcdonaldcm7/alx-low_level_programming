/**
 * _sqrt_recursion_wrapper - Returns the natural square root of a number
 *
 * @fct: Factor to consider
 * @n: input number
 *
 * Return: Natural square root of n, -1 otherwise
 */
int _sqrt_recursion_wrapper(int fct, int n)
{
	if ((fct * fct) == n)
		return (fct);
	if ((fct * fct) > n)
		return (-1);
	return (_sqrt_recursion_wrapper(fct + 1, n));
}


/**
 * _sqrt_recursion - Returns the natural square root of n
 *
 * @n: input number
 *
 * Return: Natural square root of n, -1 otherwise
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recursion_wrapper(0, n));
}

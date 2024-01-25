/**
 * is_prime_number_wrapper - Checks whether or not a number is prime
 *
 * @fct: Factor to consider
 * @n: integer input to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number_wrapper(int fct, int n)
{
	if ((n % fct) == 0)
		return (0);
	if ((fct * fct) > n)
		return (1);
	return (is_prime_number_wrapper(fct + 1, n));
}

/**
 * is_prime_number - Checks whether or not a number is prime
 *
 * @n: integer input to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (is_prime_number_wrapper(2, n));
}

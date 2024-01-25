/**
 * s_length - Computes and returns the length of a string
 *
 * @s: Input string
 *
 * Return: Length of s
 */
int s_length(char *s)
{
	if (s[0] == '\0')
		return (0);
	return (1 + s_length(&s[1]));
}


/**
 * is_palindrome_wrapper - Checks whether or not a string is a palindrome
 *
 * @s: Input string
 * @length: length of the string
 * @pos: Current position being checked
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome_wrapper(char *s, int length, int pos)
{
	if ((length / 2) == pos)
		return (1);
	if (s[pos] != s[length - pos - 1])
		return (0);
	return (is_palindrome_wrapper(s, length, ++pos));
}


/**
 * is_palindrome - Checks whether or not a string is a palindrome
 *
 * @s: Input string
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	if (s_length(s) == 0)
		return (1);
	if (!s)
		return (0);
	return (is_palindrome_wrapper(s, s_length(s), 0));
}

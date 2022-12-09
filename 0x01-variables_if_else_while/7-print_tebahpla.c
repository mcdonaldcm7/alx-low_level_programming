#include <stdio.h>

/**
 *main - Entry point
 *
 *Description: Prints the alphabet in lowercase and in reverse
 *Return: 0
 */
int main(void)
{
	for (int a = 122; a >= 97; a--)
	{
		putchar(a);
	}
	putchar(10);
	return (0);
}

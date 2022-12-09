#include <stdio.h>

/**
 *main - Entry point
 *
 *Description: Prints the alphabet in lowercase
 *Return: 0
 */
int main(void)
{
	for (int a = 97; a <= 122; a++)
	{
		putchar(a);
	}
	putchar(10);
	return (0);
}

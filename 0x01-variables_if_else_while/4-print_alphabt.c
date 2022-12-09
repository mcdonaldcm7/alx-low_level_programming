#include <stdio.h>

/**
 *main - Entry point
 *
 *Description: Prints the alphabet in lowercase, excluding q and e
 *Return: 0
 */
int main(void)
{
	for (int a = 97; a <= 122; a++)
	{
		if (a == 101 || a == 113)
			continue;
		putchar(a);
	}
	putchar(10);
	return (0);
}

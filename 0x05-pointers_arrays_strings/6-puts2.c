#include "main.h"

/**
 * puts2 - Prints every other character of a string, beginning with the first
 *
 * @str: Input string
 */
void puts2(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		if ((count % 2) == 0 || count == 0)
		{
			_putchar(str[count]);
		}
		count++;
	}
	_putchar(10);
}

#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * LQ_strlen - Returns the length of s
 *
 * @s: Input sting
 *
 * Return: Length of s
 */
int LQ_strlen(char *s)
{
	if (s[0] == '\0')
	{
		return (0);
	}
	return (1 + LQ_strlen(&s[1]));
}

/**
 * calcSize - calculate the size of the strings in av
 *
 * @av: Argument vector
 * @len: Lenght of vector
 *
 * Return: sum of calculated sizes
 */
int calcSize(char **av, int len)
{
	int size, i;

	size = 0;
	for (i = 0; i < len; i++)
	{
		size += sizeof(LQ_strlen(av[i]));
	}
	return (size);
}

/**
 * argstostr - Concatenates all the arguments of your program
 *
 * @ac: Argument count
 * @av: Argument vector
 *
 * Return: Concatenated string
 */
char *argstostr(int ac, char **av)
{
	int size, i, count;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	size = calcSize(av, ac);
	count = 0;
	s = (char *) malloc((sizeof(char) * size) + (1 * ac));
	if (s != NULL)
	{
		for (i = 0; i < ac; i++)
		{
			int len, j;

			len = LQ_strlen(av[i]);
			for (j = 0; j < len; j++, count++)
			{
				s[count] = av[i][j];
			}
			s[count] = '\n';
			count++;
		}
		return (s);
	}
	return (NULL);
}

#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

/**
 * nwords - gets the number of words in str
 *
 * @str: Input string
 *
 * Return: number of words
 */
int nwords(char *str)
{
	int count, i;

	if (str == NULL)
		return (-1);
	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && str[i] != ' ')
			count++;
		if (i > 0 && (str[i] == ' ' && str[i - 1] != ' '))
		{
			count++;
		}
		i++;
	}
	return (count);
}

/**
 * wpos - fetches the index of the specified words found
 *
 * @str: Input string
 * @pos: Position of word to fetch
 *
 * Return: array of indexes
 */
int wpos(char *str, int pos)
{
	int i, count, index;
	bool nWord;

	i = 0, count = 0, index = 0;
	nWord = true;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && nWord)
		{
			index = i;
			count++;
			if (count == pos)
				break;
			nWord = false;
		} else if (str[i] == ' ')
			nWord = true;
		i++;
	}
	return (index);
}

/**
 * LQ_len - calculates the length of str starting at index
 *
 * @str: input string
 * @index: starting index
 *
 * Return: length of word in str
 */
int LQ_len(char *str, int index)
{
	if (str[index] == '\0' || str[index] == ' ')
		return (0);
	return (1 + LQ_len(str, index + 1));
}

/**
 * strtow - splits a string into words
 *
 * @str: Input string
 *
 * Return: pointer to array of strings (words)
 */
char **strtow(char *str)
{
	int nowords, i;
	char **words;

	if (str == NULL)
		return (NULL);
	nowords = nwords(str);
	if (nowords == 0)
		return (NULL);
	words = (char **) malloc((sizeof(char *) * nowords) + 1);
	if (words != NULL)
	{
		for (i = 0; i < nowords; i++)
		{
			words[i] =
				(char *) malloc((sizeof(char *) * LQ_len(str, wpos(str, i + 1))) + 1);
			if (words[i] == NULL)
			{
				int j;

				for (j = 0; j < i; j++)
					free(words[j]);
				return (NULL);
			}
		}
		for (i = 0; i < nowords; i++)
		{
			int iWord, j, windex;

			windex = wpos(str, i + 1);
			iWord = LQ_len(str, windex);
			for (j = 0; j < iWord; j++)
				words[i][j] = str[windex + j];
			words[i][j] = '\0';
		}
		words[i] = NULL;
		return (words);
	}
	return (NULL);
}

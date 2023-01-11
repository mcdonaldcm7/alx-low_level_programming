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
 * indexes - fetches the indexes of the words found
 *
 * @str: Input string
 *
 * Return: array of indexes
 */
int *indexes(char *str)
{
	int *array;
	int size, i, j;
	bool nWord;

	size = nwords(str);
	array = (int *) malloc(sizeof(int) * size);
	i = 0, j = 0;
	nWord = true;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && nWord)
		{
			array[j++] = i;
			nWord = false;
		} else if (str[i] == ' ')
			nWord = true;
		i++;
	}
	return (array);
}

/**
 * LQ_strlen - calculates the length of str starting at index
 *
 * @str: input string
 * @index: starting index
 *
 * Return: length of word in str
 */
int LQ_strlen(char *str, int index)
{
	if (str[index] == '\0' || str[index] == ' ')
		return (0);
	return (1 + LQ_strlen(str, index + 1));
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
	int *wordsi;
	char **words;

	if (str == NULL)
		return (NULL);
	nowords = nwords(str);
	if (nowords == 0)
		return (NULL);
	wordsi = indexes(str);
	words = (char **) malloc((sizeof(char *) * nowords) + 1);
	if (words != NULL)
	{
		for (i = 0; i < nowords; i++)
		{
			words[i] =
				(char *) malloc((sizeof(char *) * LQ_strlen(str, wordsi[i])) + 1);
			if (words[i] == NULL)
			{
				int j;

				for (j = 0; j < i; j++)
					free(words[j]);
				free(wordsi);
				return (NULL);
			}
		}
		for (i = 0; i < nowords; i++)
		{
			int iWord, j;

			iWord = LQ_strlen(str, wordsi[i]);
			for (j = 0; j < iWord; j++)
				words[i][j] = str[wordsi[i] + j];
			words[i][j] = '\0';
		}
		words[i] = NULL;
		return (words);
	}
	free(wordsi);
	return (NULL);
}

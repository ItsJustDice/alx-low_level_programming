#include "main.h"
#include <stdlib.h>

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);
/**
 * word_len - Locates the index marking the end of the
 *            first word contained within a string.
 * @str: The string to be searched.
 * Return: The index marking the end of the initial word pointed to by str.
 */
int word_len(char *str)
{
	int index = 0, len = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		/* iterate until end of string or a space is found */
		len++;
		index++;
	}
	return (len);
}
/**
 * count_words - Counts the number of words contained within a string.
 * @str: The string to be searched.
 * Return: The number of words contained within str.
 */
int count_words(char *str)
{
	int index = 0, words = 0, len = 0;

	for (index = 0; *(str + index); index++)
		len++;

	for (index = 0; index < len; index++)
	{
		if (*(str + index) != ' ')
		{
			words++;
			index += word_len(str + index);
		}
	}

	return (words);
}
/**
 * strtow - Splits a string into words.
 * @str: The string to be split.
 * Return: If str = NULL, str = "", or the function fails - NULL.
 *         Otherwise - a pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	char **matrix;

	int index = 0, words, i, letters, j;

	if (str == NULL || str[0] == '\0')
	{
		/* check for invalid input */
		return (NULL);
	}
	/* get the number of words in the string */
	words = count_words(str);
	if (words == 0)
	{
		return (NULL);
	}
	/* allocate memory for the array of words */
	matrix = malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i < words; i++)
	{
		while (str[index] == ' ')
			index++;

		letters = word_len(str + index);

		matrix[i] = malloc(sizeof(char) * (letters + 1));

		if (matrix[i] == NULL)
		{
			for (; i >= 0; i--)
				free(matrix[i]);

			free(matrix);
			return (NULL);
		}
		for (j = 0; j < letters; j++)
			index[i][j] = str[index++];

		matrix[i][j] = '\0';
	}
	matrix[i] = NULL;

	return (matrix);
}

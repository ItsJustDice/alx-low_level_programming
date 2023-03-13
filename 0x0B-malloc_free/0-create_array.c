#include "main.h"
#include <stdlib.h>
/**
 * create_array - Entry point
 * Description: create array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 * Return: pointer to array, NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *len;
	unsigned int j;

	len = malloc(sizeof(char) * size);

	if (size == 0 || len == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
		len[j] = c;
	return (len);
}

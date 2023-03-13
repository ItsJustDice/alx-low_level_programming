#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - Entry point
 * Description: duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	int length = 0;
	char *dup;
	int j;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[length] != '\0')
	{
		length++;
	}
	dup = (char *)malloc(length + 1);

	for (j = 0; j < length; j++)
	{
		dup[j] = str[j];
	}
	dup[length] = ('\0');
	return (dup);
}

#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Entry point
 * Description: get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	int str1, str2;
	char *result;
	int j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[str1] != '\0')
	{
		str1++;
	}
	while (s2[str2] != '\0')
	{
		str2++;
	}

	result = malloc((str1 + str2 + 1) * sizeof(char));

	if (result == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < str1; j++)
	{
		*(result + j) = *(s1 + j);
	}
	for (j = 0; j < str2; j++)
	{
		*(result + str1 + j) = *(s2 + j);
	}
	*(result + str1 + str2) = ('\0');

	return (result);
}

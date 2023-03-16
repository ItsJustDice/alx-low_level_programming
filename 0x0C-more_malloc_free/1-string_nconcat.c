#include "main.h"
#include <stdlib.h>
/**
 * *string_nconcat - Entry point
 * Description: concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len = 0, s2_len = 0;
	char *s, *j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[s1_len])
	{
		s1_len++;
	}
	while (s2[s2_len])
	{
		s2_len++;
	}

	if (n >= s2_len)
	{
		n = s2_len;
	}

	s = malloc(sizeof(char) * (s1_len + n + 1));

	if (s == NULL)
	{
		return (NULL);
	}

	j = s;

	while (*s1)
	{
		j = s1;
		j++;
		s1++;
	}
	while (n > 0)
	{
		j = s2;
		j++;
		s2++;
		n--;
	}
	j = ('\0');
	return (s);
}

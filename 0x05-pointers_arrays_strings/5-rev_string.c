#include "main.h"
/**
 * rev_string - Entry point
 * Description: a function that reverses a string
 * @s: Integer
 * Return: char
 */
void rev_string(char *s)
{
	int len, i, j;
	char temp;

	while (s[len] != '\0')
	{
		len++;
	}
	i = 0;
	j = len - 1;
	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}

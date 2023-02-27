#include "main.h"
/**
 * rev_string - Entry point
 * Description: a function that reverses a string
 * @s: Integer
 * Return: char
 */
void rev_string(char *s)
{
	int len, c, i;
	char temp;

	while (s[len] != '\0')
	{
		len++;
	}
	c = 0;
	i = len - 1;
	while (c < i)
	{
		temp = s[c];
		s[c] = s[i];
		s[i] = temp;
		i--;
	}
}

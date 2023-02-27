#include "main.h"
/**
 * rev_string - Entry point
 * Description: a function that reverses a string
 * @s: Integer
 * Return: char
 */
void rev_string(char *s)
{
	int len, c, x;
	char temp;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	c = 0;
	x = len - 1;
	while (c < x)
	{
		temp = s[c];
		s[c] = s[x];
		s[x] = temp;
		c++;
		x--;
	}
}

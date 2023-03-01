#include "main.h"
/**
 * _strcmp - Entry point
 * Description: a function that compares two strings
 * @s1: Char
 * @s2: Char
 * Return: char
 */
int _strcmp(char *s1, char *s2)
{
	int x = 0;

	while (s1[x] == s2[x])
	{
		if (s1[x] == '\0' || s2[x] == '\0')
		{
			return (0);
		}
		x++;
	}
	return (s1[x] - s2[x]);
}

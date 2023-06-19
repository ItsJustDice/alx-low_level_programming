#include "main.h"
/**
 * _strlen - Entry point
 * Description: a function that returns the length of a string
 * @s: Intefer
 * Return: int
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

#include "main.h"
/**
 * *_strncat - Entry point
 * Description: a function that concatenates two strings
 * @src: char
 * @dest: char
 * @n: Integer
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	char *x = dest;

	while (*x != '\0')
	{
		x++;
	}
	while (*src != '\0' && n-- > 0)
	{
		*x++ = *src++;
	}
	*x = '\0';
	return (dest);
}

#include "main.h"
/**
 * *_strcat - Entry point
 * Description: a function that concatenates two strings
 * @src: Character
 * @dest: Character
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	char *i = dest;

	while (*i != '\0')
	{
		i++;
	}
	while (*src != '\0')
	{
		*i = *src;
		i++;
		src++;
	}
	*i = '\0';
	return (dest);
}

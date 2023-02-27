#include "main.h"
/**
 * *_strcpy - Entry point
 * Description: Copies string pointed to by src
 * @dest: Character
 * @src: Character
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	char *x = dest;

	while (*src != '\0')
	{
		*x++ = *src++;
	}
	*x = '\0';
	return (dest);
}

#include "main.h"
/**
 * *_strncpy - Entry point
 * Description: a function that copies a string
 * @n: Integer
 * @dest: char
 * @src: char
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int z;

	for (z = 0; z < n && src[z] != '\0'; z++)
	{
		dest[z] = src[z];
	}
	for (; z < n; z++)
	{
		dest[z] = '\0';
	}
	return (dest);
}

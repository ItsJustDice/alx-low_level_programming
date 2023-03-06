#include "main.h"
/**
 * *_memcpy - Entry point
 * Description: function that copies memory area
 * @dest: Character
 * @src: Character
 * @n: Integer
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *pdest = dest;

	char *psrc = src;

	while (n-- > 0)
	{
		*pdest++ = *psrc++;
	}
	return (dest);
}

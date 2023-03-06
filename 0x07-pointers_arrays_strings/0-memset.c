#include "main.h"
/**
 * *_memset - Entery point
 * Description: fills memory with a constant byte
 * @s: Character
 * @b: Character
 * @n: Integer
 * Return: Char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}

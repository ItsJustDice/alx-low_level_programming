#include "main.h"
/**
 * simple_print_buffer - Entery point
 * Description: fills memory with a constant byte
 * @s: Character
 * @b: Character
 * @n: Integer
 * Return: Char
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n-- > 0)
	{
		*p++ = b;
	}
	return (s);
}

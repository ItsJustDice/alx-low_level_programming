#include "main.h"
/**
 * _strlen_recursion - Entry point
 * Description: Returns the length of a string
 * @s: Character
 * Return: Length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		int len = _strlen_recursion(s + 1);

		_putchar(*s);
		return (len + 1);
	}
}

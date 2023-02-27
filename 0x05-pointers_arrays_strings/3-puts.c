#include "main.h"
/**
 * _puts - Entry point
 * Description: a function that prints a string, new line, stdout
 * @str: String data type
 * Return: str
 */
void _puts(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		_putchar(str[c]);
		c++;
	}
	_putchar('\n');
}

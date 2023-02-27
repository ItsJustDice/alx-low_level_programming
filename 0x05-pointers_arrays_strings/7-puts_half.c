#include "main.h"
/**
 * puts_half - Entry point
 * Description: function that prints half of a string
 * @str: Char
 * Return: char
 */
void puts_half(char *str)
{
	int len = 0;
	int n, j;
	char *i = str;

	while (*i != '\0')
	{
		len++;
		i++;
	}
	n = (len - 1) / 2 + 1;
	for (j = n; j < len; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}

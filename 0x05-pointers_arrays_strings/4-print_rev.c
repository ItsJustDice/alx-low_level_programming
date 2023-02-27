#include "main.h"
/**
 * print_rev - Entry point
 * Description: prints a string, in reverse, followed by a new line
 * @s: Integer
 * Return: str
 */
void print_rev(char *s)
{
	int i;

	i = ft_strlen(str);
	while (i)
	{
		write(1, (str + 1), 1);
		i--;
	}
	return (str);
}

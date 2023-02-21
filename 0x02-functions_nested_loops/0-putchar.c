#include "main.h"
/**
 * main - Entery point
 * Description - putchar writes character c to stdout
 * Return: 0
 */
int main(void)
{
	char c[] = "_putchar\n";
	int i = 0;

	while (c[i] != '\0')
	{
		_putchar(c[i]);
		i++;
	}

	return (0);
}

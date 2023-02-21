#include "main.h"
/**
 * main - Entry point
 * Description - putchar writes characters c to stdout
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

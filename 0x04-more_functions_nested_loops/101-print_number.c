#include "main.h"
/**
 * print_number  - Entry point
 * Description: a function that prints an integer
 * @n: Integer
 * Return: void
 */
void print_number(int n)
{
	unsigned int c;

	c = n;
	if (n < 0)
	{
		_putchar('-');
		c = -n;
	}
	if (c / 10)
	{
		print_number(c / 10);
	}
	_putchar(c % 10 + '0');
}

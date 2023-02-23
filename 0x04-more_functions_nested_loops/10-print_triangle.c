#include <stdio.h>
/**
 * print_triangle - Entry point
 * Description - a function that prints a triangle
 * @size: Integer
 * Return: void
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		putchar('\n');
		return;
	}

	for (int i = 1; i <= size; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}

#include "main.h"
#include <stdio.h>
/**
 * print_array - Entry point
 * Description: an array of integers
 * @a: Integer
 * @n: Integer
 * Return: int
 */
void print_array(int *a, int n)
{
	int z;

	for (z = 0; z < n; z++)
	{
		printf("%d", a[z]);
		if (z != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}

#include "main.h"
/**
 * swap_int - Entry point
 * Description: a function that swaps the values of two integers
 * @a: Integer
 * @b: Integer
 * Return: int
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}

#include "main.h"
#include <stdlib.h>
/**
 * *array_range - Entry point
 * Description: creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *s;
	int j, size;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	s = malloc(sizeof(int) * size);
	if (s == NULL)
	{
		return (NULL);
	}
	for (j = 0; min <= max; j++)
	{
		s[j] = min++;
	}
	return (s);
}

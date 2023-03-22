#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - executes a function given as a perameter
 * @array: array
 * @size: how many elem to print
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (!array || !action)
		return;

	for (j = 0; j < size; j++)
		action(array[j]);
}

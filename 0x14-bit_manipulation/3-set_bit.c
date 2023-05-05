#include "main.h"

/**
 * set_bit - Entry point
 * Description: sets the value of a bit to 1 at a given index
 * @n: Integer
 * @index: index of the bit to set
 * Return: 1 if successful or -1 if error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bounce;
	/* verify that index exceeds number of bit in unsigned long int */
	if (index > (sizeof(unsigned long int) * 8))
	{
		return (-1);
		/* if index out of bounds, return -1 */
	}
	bounce = 1 << index;
	/* bounce with 1 at specified index */
	*n = *n | bounce;
	/* utilizing bitwise OR, set the bit to 1 */

	return (1);
	/* return 1 to denote accomplishment */
}

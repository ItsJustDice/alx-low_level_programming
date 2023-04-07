#include "main.h"
/**
 * clear_bit - Entry point
 * Description: sets the value of a bit to 0 at a given index
 * @n: Integer
 * @index: index of the bit to clear
 * Return: 1 if successful, -1 if error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int list;
	/* verify that index exceeds number of bits in unsigned int */
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
		/* if index is out of bounds then you can return to -1 */
	}
	list = 1 << index;
	/* making a list with 1 at specified index */
	list = ~list;
	/* list inverted to produce a list with 0 at specified index */
	*n = *n & list;
	/* use bitwise AND to set bit to 0 */

	return (1);
	/* to signify success, return 1 */
}

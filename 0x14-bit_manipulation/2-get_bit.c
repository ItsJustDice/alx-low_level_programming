#include "main.h"

/**
 * get_bit - Entry point
 * Description: returns the value of a bit at a given index
 * @n: Integer
 * @index: index of bit to check
 * Return: value of bit at given index or -1 if error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int slip;
	/* the bit value in a variable */
	if (index > (sizeof(unsigned long int) * 8))
	/* verify that index exceeds the number of bits in an unsigned long int */
	{
		return (-1);
		/* if index is out of bounds return -1 */
	}
	/* right The bit value is obtained by shifting integer n by index, ANDing 1 */
	slip = (n >> index) & 1;

	return (slip);
	/* bring-up the bit value */
}

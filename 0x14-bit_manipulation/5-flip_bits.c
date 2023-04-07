#include "main.h"
/**
 * flip_bits - Entry point
 * Description: returns number of bits you need to flip
 * to get from one number to another
 * @n: first digit
 * @m: second digit
 * Return: number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int pop = n ^ m;
	/* extrapolate the bits that are diffrent from n & m */
	unsigned int matrix = 0;
	/* set the number of unique bits to 0 at beginning */
	while (pop != 0)
	{
		matrix += (pop & 1);
		/* if the least important diffrence is 1 then add 1 to total */
		pop >>= 1;
		/* check subsequent bit, shifft pop to the right */
	}
	return (matrix);
}


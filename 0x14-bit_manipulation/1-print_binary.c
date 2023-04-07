#include "main.h"
/**
 * print_binary - Entry point
 * Description: prints the binary representation of a number
 * @n: Integer
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int j;
	/* go through each bit in the integer in iteration */
	for (j = 63; j >= 0; j--)
	{
		/* to extract the number's i-th bit, use Bitwise AND */
		unsigned long int dip = 1UL << j;

		/* Depending on wheter the bit is set or not, print "1" or "0" */
		if ((n & dip) != 0)
		{
			_putchar ('1');
		}
		else
		{
			_putchar ('0');
		}
	}
}

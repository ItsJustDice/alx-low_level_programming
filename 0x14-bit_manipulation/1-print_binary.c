#include "main.h"

/**
 * print_binary - Entry point
 * Description: Prints the binary representation of a number
 * @n: Integer
 */

void print_binary(unsigned long int n)
{
	int j = 0;

	/* determine where in the binary string the leftmost 1 is located */
	while ((n >> j) > 1)
	{
		j++;
	}
	/* displays the number's binary form in text */
	while (j >= 0)
	{
		if ((n >> j) & 1)
		{
			_putchar ('1');
		}
		else
		{
			_putchar('0');
		}
		/* ends the while loop and advances to the rightmost bit position */
		j--;
	}
}

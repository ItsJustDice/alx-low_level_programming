#include "main.h"

/**
 * get_endianness - Entry point
 * Description: checksthe endianness of the system
 * Return: 0 if bit-endian, 1 if little-endian
 */

int get_endianness(void)
{
	unsigned int numb;
	/* construct a multibyte value with LSB set to 1 */
	char *list = (char *)&numb;
	/* making a pointer to a value and casting it as a char pointer */

	if (*list)
	{
		/* the initial byte is the least important (little) */
		return (1);
	}
	else
	{
		/* the initial byte is the most important */
		return (0);
	}
}

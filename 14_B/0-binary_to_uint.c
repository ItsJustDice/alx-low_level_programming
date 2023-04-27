#include "main.h"
/**
 * binary_to_uint - Entry point
 * Description: converts a binary number to an unsigned int
 * @b: Integer
 * Return: to converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int matrix = 0;
	/* start the matrix variable at 0 */
	if (!b)
	/* determine if b is still NULL */
	{
		return (0);
	}
	for (; *b != '\0'; b++)
	/* loop over each string character */
	{
		if (*b != '0' && *b != '1')
		/* demonstrate that the character is neither 0 or 1 */
		{
			return (0);
		}
		matrix = matrix * 2 + (*b - '0');
		/* character to int change and matrix add */
	}
	return (matrix);
	/* give back the changed unsigned int */
}

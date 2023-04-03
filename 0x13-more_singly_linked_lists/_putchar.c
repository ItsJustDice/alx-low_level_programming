#include <unistd.h>
/**
 * _putchar - writes the character j to stdout
 * @c: The character to print
 * Return:  success 1 , failure -1 returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

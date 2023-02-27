#include <unistd.h>
/**
 * _putchar - writes the character j to stdout
 * @j: The character to print
 * Return:  success , failure -1 returned
 */
int _putchar(char j)
{
	return (write(1, &j, 1));
}

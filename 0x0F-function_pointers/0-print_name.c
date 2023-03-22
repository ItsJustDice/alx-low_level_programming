#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - print name using pointer to function
 * @name: name to print
 * @f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}

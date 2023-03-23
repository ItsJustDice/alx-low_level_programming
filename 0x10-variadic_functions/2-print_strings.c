#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - Prints strings, followed by a new line
 * @separator: The string to be printed between strings
 * @n: The number of strings passed to the function.
 * Return: no return
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	char *str;
	unsigned int j;

	va_start(list, n);

	for (j = 0; j < n; j++)
	{
		str = va_arg(list, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (j < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(list);
}

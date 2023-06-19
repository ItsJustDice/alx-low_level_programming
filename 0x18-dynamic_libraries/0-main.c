#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
	/* Print length of string "My Dyn lib" using _strlen function */
	/* %d format specifier is used to print an integer value */
	printf("%d\n", _strlen("My Dyn lib"));
	/* Return exit status indicating successful execution of program */
	return (EXIT_SUCCESS);
}

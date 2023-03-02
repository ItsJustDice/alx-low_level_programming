#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints a buffer 10 bytes at a time, starting with
 *                the byte position, then showing the hex content,
 *                then displaying printable charcaters.
 * @b: The buffer to be printed.
 * @size: The number of bytes to be printed from the buffer.
 * Return: int
 */

void print_buffer(char *b, int size)
{
	int bytes, index;

	for (bytes = 0; bytes < size; bytes += 10)
	{
		printf("%08x: ", bytes);

		for (index = 0; index < 10; index++)
		{
			if ((index + bytes) >= size)
				printf("  ");
			else
				printf("%02x", *(b + index + bytes));
			if ((index % 2) != 0 && index != 0)
				printf(" ");
		}
		for (index = 0; index < 10; index++)
		{
			if ((index + bytes) >= size)
				break;
			else if (*(b + index + bytes) >= 31 &&
				 *(b + index + bytes) <= 126)
				printf("%c", *(b + index + bytes));
			else
				printf(".");
		}
		if (bytes >= size)
			continue;
		printf("\n");
	}
	if (size <= 0)
		printf("\n");
}

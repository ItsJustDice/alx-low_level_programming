#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *matrix_b(char *pop);
void disclosure(int i);

/**
 * matrix_b - allocates 1024 for a buffer
 * Description: allocation of bytes
 * @pop: storing chars and name of the files
 * Return: pointer to a new buffer
 */
char *matrix_b(char *pop)
{
	char *pops;

	pops = malloc(sizeof(char) * 1024);
	if (pops == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", pop);
		exit(99);
	}
	return (pops);

}
/**
 * disclosure - Entry point
 * @i: file descriptor to be closed
 */
void disclosure(int i)
{
	int j;

	j = close(i);

	if (j == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd%d\n", i);
		exit(100);
	}
}
/**
 * main - beginning point
 * @argc: The number of arguments
 * @argv: An array of pointers
 * Return: 0 success
 *
 * Description: variable outcomes
 * exit code 97 if arguement count is incorrect
 * exit code 98 if file_from cant be read or doesn't exist
 * exit code 99 if file_to cannot be written or created
 * exit code 100 if file_to or file_from cannot be closed
 */
int main(int argc, char *argv[])
{
	int i, j, k, l;
	char *len;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	len = matrix_b(argv[2]);
	i = open(argv[1], O_RDONLY);
	k = read(i, len, 1024);
	j = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (i == -1 || k == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(len);
			exit(98);
		}

		l = write(j, len, k);
		if (j == -1 || l == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(len);
			exit(99);
		}

		k = read(i, len, 1024);
		j = open(argv[2], O_WRONLY | O_APPEND);
	} while (k > 0);

	free(len);
	close_file(i);
	close_file(j);

	return (0);
}

#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - Entry point
 * Description: reads a text file and prints it to the POSIX standard output
 * @filename: The name of the file to read
 * @letters: The max number of letters to read in a file
 * Return: number of letters, read and printe. 0 if erros
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *twinx;
	/* twinx to hold the file content */
	ssize_t file_descriptor;
	ssize_t nwritten;
	ssize_t t_written;

	/* open the file for reading */
	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	twinx = malloc(sizeof(char) * letters);
	t_written = read(file_descriptor, twinx, letters);
	nwritten = write(STDOUT_FILENO, twinx, t_written);

	free(twinx);
	/* free the twinx */
	close(file_descriptor);
	/* close the file */
	return (nwritten); /* return the total number of bytes written */
}

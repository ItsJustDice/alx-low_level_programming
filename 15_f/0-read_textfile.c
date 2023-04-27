#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - Entry point
 * Description: reads a text file and prints it to the POSIX standard output
 * @filename: name of file
 * @letters: letters to be read
 * Return: actual number of bytes read and printed
 * 0 when fucntion fails or filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	/* buffer to keep the data in the file */
	ssize_t fd;
	/* file discriptor */
	ssize_t read_b;
	/* number of byte reads */
	if (filename == NULL)
		/* look to see if filename is NULL */
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	/* allots space for buffer in memory */
	if (buffer == NULL)
	/* looks to see if malloc() fails */
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	/* read file that's open */
	if (fd == -1)
	/* looks to see if open fails */
	{
		return (0);
	}
	read_b = read(fd, buffer, letters);
	/* reads filles "letters" bytes in full */
	if (read_b == -1)
	/* looks to see if reads fails */
	{
		return (0);
	}
	if (write(STDOUT_FILENO, buffer, read_b) != read_b)
	/* buffer to stdout */
	{
		return (0);
	}
	free(buffer); /* releasing buffer memory */
	close(fd);/* file closure */
	return (read_b);/* total number of bytes read or written */
}

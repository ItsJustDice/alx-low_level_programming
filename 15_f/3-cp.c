#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *allot_buffer(char *filename);
void lock_file(int fd);
/**
 * allot_buffer - Entry point
 * Description: allot bytes to be used
 * @filename: name of File
 * Return: buffer allot
 */
char *allot_buffer(char *filename)
{
	char *buffer;
	/* provides the buffer with 1024 memory */
	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		/* message is printed if buffer allocation fails */
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (buffer);
}
/**
 * lock_file - closes file
 * @fd: file discriptor
 */
void lock_file(int fd)
{
	int axe;
	/* close file discriptor */
	axe = close(fd);
	if (axe == -1)
	{
		/* when a file discriptor closes unsuccessfully, print an error message */
		dprintf(STDERR_FILENO, "Error: Can't closefd %d\n", fd);
		exit(100);
	}
}
/**
 * main - Entry point
 * Description: duplicates content from another file
 * @argc: Number of arguements
 * @argv: Array of strings
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int file_begin, file_to, re, wri;
	char *setbuffer;

	/* if the arguement count if off, print a warning */
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_begin file_to\n");
		exit(97);
	}
	/* provides a buffer */
	setbuffer = allot_buffer(argv[2]);
	/* downloadable source code for reading */
	file_begin = open(argv[1], O_RDONLY);
	/* the source file's 1024 bytes into the buffer */
	re = read(file_begin, setbuffer, 1024);
	/* Open destination file with the following permissions: rw-r--r- */
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0644);
	do {
		/* if the reading from the source file fails, print an error message */
		if (file_begin == -1 || re == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		wri = write(file_to, buffer, re);
		/* whever writting to a destination folder fails, print an error message */
		if (file_to == -1 || wri == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		re = read(file_begin, buffer, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (re > 0);
	free(buffer);
	lock_file(file_begin);
	lock_file(file_to);
	/* upon success, return 0 */
	return (0);
}

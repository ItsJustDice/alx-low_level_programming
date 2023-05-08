#include "main.h"
/**
 * create_file - Entry point
 * Desciption: creates a file
 * @filename: a pointer to a string that contains the file name to be created
 * @text_content: pointer to a string that contains the contents that
 * will be written to the file
 * Return: 1 0n success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int i, bytes_written, matrix = 0;
	/* check if filename is NULL */
	if (filename == NULL)
		return (-1);

	/* if text_content isn't NULL, find lenght */
	if (text_content != NULL)
	{
		for (matrix = 0; text_content[matrix];)
			matrix++;
	}
	/* create file with specific filename and add specified text_content to it */
	i = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	bytes_written = write(i, text_content, matrix);

	/* checks for errors */
	if (i == -1 || bytes_written == -1)
	{
		return (-1);
	}
	close(i);

	return (1);
}

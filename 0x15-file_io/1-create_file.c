#include "main.h"
/**
 * create_file - Entry point
 * Description: function that creates a file
 * @filename: pointer to the name of the file created
 * @text_content: pointer to string to write to a file
 * Return: 1 if success, -1 if failure
 */
int create_file(const char *filename, char *text_content)
{
	int wri, fd, matrix = 0;

	/* give -1 back if filename is 0 */
	if (!filename)
	{
		return (-1);
	}
	/* determine length if text_content isn't NULL */
	if (text_content != NULL)
	{
		for (matrix = 0; text_content[matrix];)
			matrix++;
	}
	/* open specified file, write & truncate if exists, if not then create */
	/* put 0600 as file permission (rw- --- ---) */
	fd = open(filename, O_CREAT, O_RDWR, O_TRUNC, 0600);
	/* publish the string to a file */
	wri = write(fd, text_content, matrix);
	/* give-back -1 if trying to write to or opening file fails */
	if (fd == -1 || wri == -1)
	{
		return (-1);
	}
	/* close document and hit return 1 to confirm success */
	close(fd);
	return (1);
}

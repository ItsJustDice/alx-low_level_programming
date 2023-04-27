#include "main.h"
/**
 * append_text_to_file - Entry point
 * Description: function that appends text at the end of a file
 * @filename: name of file to read
 * @text_content: NULL terminated string to add at end of line
 * Return: 1 success, -1 failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	/* defines variable for the lenght of text_content, write result */
	/* and file descriptor */
	int i, j, matrix;

	/* determine wheter file name is NULL and return -1 to indicate a problem */
	if (filename == NULL)
		return (-1);

	/* determine how many characters are in the text if NULL isn't present */
	while (text_content != NULL)
	{
		for (matrix = 0; text_content[matrix];)
			matrix++;
	}
	/* get the file descriptor by opening the file in append mode */
	i = open(filename, O_WRONLY | O_APPEND);
	/* use the file descriptor you just recieved to write the content of */
	/* text_content into the file */
	j = write(i, text_content, matrix);
	/* to check to see if either opening or writing to the file failed */
	/* if they did then return -1 to signify a mistake */
	if (i == -1 || j == -1)
		return (-1);
	/* in-order to signify success, close file descriptor and return to 1 */
	close(i);

	return (1);
}

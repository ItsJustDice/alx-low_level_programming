#include "main.h"
/**
 * append_text_to_file - Entry point
 * Description: appends text at the end of a file
 * @filename: reference to a string that contains the filename to append to
 * @text_content: pointer to a string containing the tet_content that
 * has to be added to the file
 * Return: 1 success, -1 failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int j, bytes_written, coco = 0;
	/* checks to see if filename is NULL */
	if (filename == NULL)
		return (-1);
	/* if text_content isn't NULL, find lenght */
	if (text_content != NULL)
	{
		for (coco = 0; text_content[coco];)
			coco++;
	}
	/* open specific file in append mode */
	j = open(filename, O_WRONLY | O_APPEND);
	if (j == -1)
	{
		return (-1);
	}
	/* writes specified text_content towards the end of thee file */
	bytes_written = write(j, text_content, coco);
	/* checks for any errors */
	if (bytes_written == -1)
	{
		close(j);
		return (-1);
	}
	close(j);

	return (1);
}

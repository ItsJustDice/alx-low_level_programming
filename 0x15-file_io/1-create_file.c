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

	/* give -1 back if filename is NULL */
	if (!filename)
		return (-1);
	/*
	 * open specified file, write & truncate if exists, if not then create
	 * put 0600 as file permission (rw- --- ---)
	 */
	fd = open(filename, O_CREAT, O_WRONLY, O_TRUNC, 0600);
	if (fd == -1)
		/*
		 * opening file failed,if fd was set-to -1
		 * return -1 in the case to show that function failed
		 * determine length if text_content isn't empty
		 */
	if (text_content)
	{
		/* tallies numbers of charcters in text_context */
		while (text_content[matrix])
			matrix++;
		/* creates file with text_content */
		wri = write(fd, text_content, matrix);
		if (wri == -1)
		{
			close(fd);
			return (-1);
		}
	}
	/* close document and hit return 1 to confirm success */
	close(fd);
	return (1);
}

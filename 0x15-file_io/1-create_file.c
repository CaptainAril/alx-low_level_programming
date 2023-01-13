#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to be created
 * @text_content: a null terminated string to be written to the file
 * Return:  Return 1 on success; -1 on failure
 * Fails if file can not be created, or written;
 * or write fails, or filename is NULL
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len;

	if (!filename)
		return (-1);
	for (len = 0; text_content[len]; len++)
		;
	if ((fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600)) == -1)
		return (-1);
	if (!text_content)
		write(fd, " ", 1);
	else
		if (write(fd, text_content, len) == -1)
			return (-1);
	close(fd);
	return (1);
}

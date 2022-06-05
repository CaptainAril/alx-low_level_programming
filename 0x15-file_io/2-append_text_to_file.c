#include "main.h"

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len;

	if (!filename)
		return (-1);
	if ((fd = open(filename, O_WRONLY | O_APPEND)) == -1)
		return (-1);
	for (len = 0; text_content[len]; len++)
		;
	if ((write(fd, text_content, len)) == -1)
		return (-1);

	close(fd);
	return (1);
}

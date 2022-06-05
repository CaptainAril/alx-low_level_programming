#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: points to the file to be read
 * @letters: number of letters to be read and printed
 * Return: Returns the actual number of letters it could read and print
 * or 0 if filename is NULL
 * or 0 if write fails or does not write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, let_read, let_writn, expected_char;
	char *buf;

	expected_char = letters;

	/* create temporary buffer */
	buf = malloc(sizeof(char) * letters);

	/* opens file */
	if (!filename)
		return (0);
	if ((fd = open(filename, O_CREAT | O_RDONLY)) == -1)
		return (0);

	if ((let_read = read(fd, buf, expected_char)) == -1)
		return (0);

	if ((let_writn = write(1, buf, expected_char)) == -1 || let_writn != expected_char)
	    return(0);

	close(fd);
	free(buf);

	return (let_writn);
}

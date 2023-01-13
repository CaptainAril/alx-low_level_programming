#include "main.h"

int main(int argc, char **argv)
{
	int read_from, read_to;
	char *buf;

	buf = malloc(sizeof(char) * 1024);

        if (argc != 3)
	{
		exit (97);
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
	}

	if ((read_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664)) == -1)
	{
		exit (99);
		dprintf(2, "Error: Can't write from file %s\n", argv[2]);
	}

	if ((read_from = open(argv[1], O_RDONLY)) == -1)
	{
		exit (98);
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
	}

        if ((read(read_from, buf, 1024)) == -1)
	{
		exit (98);
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
	}

	if ((write(read_to, buf, 1024)) == -1)
	{
		exit (99);
		dprintf(2, "Error: Can't write from file %s\n", argv[2]);
	}


	if ((close(read_from)) == -1)
	{
		exit (100);
		dprintf(2, "Error: Can't close fd %i\n", read_from);
	}
	if ((close(read_to)) == -1)
	{
		exit (100);
		dprintf(2, "Error: Can't close fd %i\n", read_to);
	}
	free(buf);
	return (0);
}

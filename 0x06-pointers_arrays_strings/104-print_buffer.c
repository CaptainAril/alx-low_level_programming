#include "main.h"
#include <stdio.h>


/**
 * print_buffer - prints the content of `size` bytes of buffer `b`
 * The output should print 10 bytes per line
 *
 * @b: buffer pointer to by b
 * @size: size of buffer
 *
 * Return: Nothing
 */
void print_buffer(char *b, int size)
{
	int i, n;

	if (size <= 0)
		putchar('\n');

	for (i = n = 0; i < size; i += 10)
	{
		printf("%08x: ", i);


		for (n = 0; n < 10; n++)
		{
			if (i + n < size)
				printf("%02x", b[i + n]);
			else
				printf("  ");
			if (n % 2 != 0)
				putchar(' ');
		}

		for (n = 0; n < 10 && (n + i < size); n++)
		{
			if (b[i + n] >= 32 && b[i + n] <= 126)
				putchar(b[i + n]);
			else
				putchar('.');
		}

		putchar('\n');

	}

}

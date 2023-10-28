#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: memory area (buffer) to be filled
 * @b: constant byte to fill buffer with
 * @n: size of area/bytes of memory to be filled
 *
 * Return: pointet to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}

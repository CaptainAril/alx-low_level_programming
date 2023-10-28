#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: destination memory area
 * @src: memory area to be copied from
 * @n: number of bytes to copy from src to dest
 *
 * Return: returns pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}

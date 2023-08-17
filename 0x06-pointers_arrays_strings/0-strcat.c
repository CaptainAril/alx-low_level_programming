#include "main.h"

/**
 * *_strcat - function concatenates strings
 * @dest: pointer to a string
 * @src: pointer to a string
 * Return: return dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i]; i++)
	{}
	for (j = 0; src[j]; j++)
		dest[i + j] = src[j];
	dest[i + j] = '\0';
	return (dest);
}

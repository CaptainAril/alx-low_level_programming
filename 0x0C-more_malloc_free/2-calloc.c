#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of array elements
 * @size: byte size of each element
 *
 * Return: Returns pointer to allocated memory
 * or NULL - if malloc fails, nmemb or size is 0.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *t;

if (nmemb == 0 || size == 0)
{
return ('\0');
}

t = malloc(size * nmemb);
if (t == NULL)
{
return ('\0');
}
for (i = 0; i < nmemb * size; i++)
{
t[i] = 0;
}
return (t);
}

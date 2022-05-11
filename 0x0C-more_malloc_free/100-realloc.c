#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: size, in bytes, of the new allocated memory block
 * Return: pointer to allocated mamory
 * NULL, if ptr is NULL, if new_size == 0 && ptr != NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
unsigned int i;
void *new_ptr;

if (new_size == old_size)
{
return (ptr);
}
if (ptr == NULL)
{
new_ptr = malloc(new_size);

if (new_ptr == NULL)
{
return (NULL);
}
return (new_ptr);
}
if (new_size == 0 && ptr)
{
free(ptr);
return ('\0');
}

new_ptr = malloc(new_size);

if (!new_ptr)
{
return ('\0');
}
for (i = 0; i < old_size; i++)
{
*((char )new_ptr + i) = *((char *)ptr + i);
}

free (ptr);
return ((void *)new_ptr);
}

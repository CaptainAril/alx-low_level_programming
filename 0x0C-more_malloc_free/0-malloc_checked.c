#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: size of memory to be allocated
 *
 * Return: Returns pointer to allocated memory
 * or exit status 98 if malloc fails
 */

void *malloc_checked(unsigned int b)
{
unsigned int *t;
t = malloc(b);
if (t == NULL)
{
exit(98);
}
return (t);
}

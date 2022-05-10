#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: minimum integer value
 * @max: maximum integer value
 *
 * Return: Returns a pointer to the array
 * or NULL if malloc fails or min > max.
 */

int *array_range(int min, int max)
{
int *t;
int len, x, i;

if (min > max)
{
return (NULL);
}

len = 1;
for (x = min; !(x > max); x++)
{
len++;
}

t = malloc(sizeof(int) * len);
if (t == NULL)
{
return (NULL);
}
i = 0;
for (x = min; !(x > max); x++)
{
t[i] = x;
i++;
}
return (t);
}

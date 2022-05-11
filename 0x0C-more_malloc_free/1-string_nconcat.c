#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatrnates two string
 * @s1: First string
 * @s2: Second string to be concatenated into first
 * @n: number of s2 bytes to be concatenated into s1
 *
 * Return: Return pointer to s1
 * NULL if malloc fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *t;
unsigned int i, j;

if (s1 == NULL)
{
s1 = " ";
}
if (s2 == NULL)
{
s2 = " ";
}
for (i = 0; s1[i] != '\0'; i++)
{
;
}
for (j = 0; s2[j] != '\0'; j++)
{
;
}

if (n >= j)
{
n = j;
}

t = malloc(sizeof(char) * (i + n + 1));
if (t == NULL)
{
return (NULL);
}
for (i = 0; s1[i] != '\0'; i++)
{
t[i] = s1[i];
}
for (j = 0; j < n; j++)
{
t[i]  = s2[j];
i++;
}
t[i] = '\0';

return (t);
}

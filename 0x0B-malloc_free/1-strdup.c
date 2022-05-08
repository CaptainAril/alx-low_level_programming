#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to string duplicated and stored in memory
 * @str: String to be duplicated in memory
 *
 * Return: return pointer to stored string.
 */

char *_strdup(char *str)
{
char *p;
int i;
int len;

i = 0;
len = strlen(str) + 1;

p = malloc(len * sizeof(char));
while (i < len)
{
p[i] = str[i];
i++;
}
p[i] = '\0';

return (p);
}

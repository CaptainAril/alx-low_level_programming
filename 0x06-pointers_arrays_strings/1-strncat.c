#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination
 * @src: string to be copied
 * @n: amount of bytes from src used
 */

char *_strncat(char *dest, char *src, int n)
{
int i, j;

i = 0;
j = 0;

while (dest[i] != '\0')
{
i++;
}
while (j < n)
{
dest[i] = src[j];
if (src[j] == '\0')
break;
i++;
j++;
}
return (dest);
}

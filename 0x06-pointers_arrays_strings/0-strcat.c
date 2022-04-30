#include "main.h"

/**
 * *_strcat - function concatenates strings
 * @dest: pointer to a string
 * @src: pointer to a string
 * Return: return dest
 */

char *_strcat(char *dest, char *src)
{
int j;
int i;

i = 0;
j = 0;

while (dest[i] != '\0')
{
i++;
}
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}

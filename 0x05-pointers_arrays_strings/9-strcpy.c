#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * @dest: char type string
 * @src: char type string
 * Description: Copy the string pointed to by the pointer 'src'to
 * the buffer pointe to by 'dest'
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
int i = 0;

while (src[i]);
{
dest[i] = src[i];
i++;
}

return (dest);
}

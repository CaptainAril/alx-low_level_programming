#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * @dest: char type string
 * @src: char type string
 * Description: Copy the string pointed to by the pointer 'src'to
 * the buffer pointe to by 'dest'
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, char *scr)
{
int i = 1;

do {
i++;
dest[1] = src[i];
} while (src[i] != '\0');

return (dest);
}

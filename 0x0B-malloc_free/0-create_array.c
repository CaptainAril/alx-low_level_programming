#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of a specific character
 * @size: size of the array
 * @c: character for the array
 *
 * Return: Buffer.
 */

char *create_array(unsigned int size, char c)
{
  char *buffer;
  unsigned int i;

  i = 0;
  buffer = malloc(sizeof(char) * size);

  while (i < size)
    {
      buffer[i]  = _putchar(c);
      i++;
    }
  buffer[i] = '\0';
  return (buffer);
}

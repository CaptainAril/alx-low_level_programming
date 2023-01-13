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

  if (size == 0)
    {
      return (NULL);
    }
  
  buffer = malloc(sizeof(char) * size);
  if (buffer == NULL)
    {
      return (NULL);
    }

  for (i = 0; i < size; i++)
    {
      buffer[i]  = _putchar(c);
    }
  buffer[i] = '\0';
  return (buffer);
}

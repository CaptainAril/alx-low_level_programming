#include "main.h"

/**
 * _strlen - find the length of a string
 * @s: pointer to the string to check
 * Return: void
 */

int _strlen(char *s)
{
int i = 0;

while (s[1])
i++;

return (i);
}

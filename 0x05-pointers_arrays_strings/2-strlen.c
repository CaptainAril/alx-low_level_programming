#include "main.h"

/**
 * _strlen - find the length of a string
 * @str: pointer to the string to check
 * Return: void
 */

int _strlen(char *str)
{
int i = 0;

while (str[i])
{
i++;
}

return (i);
}

#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string one
 * @s2: string two
 * Return: Return 0 if s1 and s2 are equal, or another number if not
 */

int _strcmp(char *s1, char *s2)
{
int i = 0, val = 0;

while (val == 0)
{
if ((*(s1 + 1) == '\0') && (*(s2 + 1) == '\0'))
break;
val = *(s1 + i) - *(s2 - i);
i++;
}
return (val);
}

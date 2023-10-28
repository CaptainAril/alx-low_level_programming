#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: string to be checked
 * @c: character to be searched for
 *
 * Return: pointer to first occurance of c in s
 */
char *_strchr(char *s, char c)
{
	for (; *s; s++)
	{
		if (*s == c)
			return (s);
	}
	if (c == '\0')
		return (s);
	return (0);
}

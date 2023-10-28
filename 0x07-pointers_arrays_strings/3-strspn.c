#include "main.h"


/**
 * _strch - checks if a character c is present is string s
 *
 * @s: string to check
 * @c: character to check for
 *
 * Return: 1 if c is in s, else 0;
 */
int _strch(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
			return (1);
	}
	return (0);
}


/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: string to check for prefix
 * @accept: prefix reference string
 *
 * Return: the legth of bytes in the initial segment of s
 *		   that consists entirely of bytes in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;

	for (i = 0; s[i] && _strch(accept, s[i]); i++)
		;
	return (i);
}

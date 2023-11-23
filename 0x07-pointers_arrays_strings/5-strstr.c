#include "main.h"
#include <stdio.h>


/**
 * _strchk - compare two strings
 *
 * @a: string 1
 * @b: string 2
 *
 * Return: 1 if strings are equal, else 0
 */
int _strchk(char *a, char *b)
{
	int i;

	for (i = 0; b[i]; i++)
	{
		if (b[i] != a[i])
			return (0);
	}
	return (1);
}


/**
 * _strstr - finds locates a substring
 *
 * @haystack: string to search
 * @needle: substring to search for
 *
 * Return: Returns a pointer to the beginning of the located substring
 *			or NULL if the substring is not located.
 */
char *_strstr(char *haystack, char *needle)
{

	if (!(*needle))
		return (haystack);
	for (; *haystack; haystack++)
	{
		if (_strchk(haystack, needle))
			return (haystack);
	}
	return (NULL);
}

#include "main.h"
#include <stdio.h>


/**
 * _strchk - searches for the occurance of a char in a string
 *
 * @c: characater to be searched for
 * @str: string to search
 *
 * Return: returns 1 if `c` is present in `str`, else 0.
 */
int _strchk(char c, char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (c == str[i])
			return (1);
	}
	return (0);
}


/**
 * _strpbrk - searches and locates the first occurrence in the string (s)
 *			of any of the bytes in the string `accept`.
 *
 * @s: string to search
 * @accept: array of characters to search for
 *
 * Return: Return the pointer to the char found,
 *		   else, return NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	for (i = 0; s[i]; i++)
	{

		if (_strchk(s[i], accept))
			return (s + i);
	}

	return (NULL);
}

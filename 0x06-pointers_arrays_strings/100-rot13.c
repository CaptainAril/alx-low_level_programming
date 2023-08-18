#include "main.h"

/**
 * rot13 - encodes a string using `rot13`.
 *
 * @str: string to encode
 *
 * Return: returns the encoded string.
 */
char *rot13(char *str)
{
	int i;
	char p;

	for (i = 0; str[i]; i++)
	{
		p = str[i];
		if ((p >= 'a' && p <= 'm') || (p >= 'M' && p <= 'Z'))
			str[i] += 13;
		else if ((p >= 'n' && p <= 'z') || (p >= 'N' && p <= 'Z'))
			str[i] -= 13;
	}
	return (str);
}

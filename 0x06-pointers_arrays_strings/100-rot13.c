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
	int i, j;
	char *s = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *t = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; str[i]; i++)
	{
		for (j = 0; s[j]; j++)
		{
			if (str[i] == s[j])
			{
				str[i] = t[j];
				break;
			}
		}
	}
	return (str);
}

#include "main.h"


/**
 * leet - encodes a string into 1337(leet)
 *
 * @str: sting to encode
 *
 * Return: returns encoded string
 */
char *leet(char *str)
{
	int i, n;
	char c[] = "aAeEoOtTlL";
	char rep[] = "4433007711";

	for (i = 0; str[i]; i++)
	{
		for (n = 0; c[n]; n++)
		{
			if (str[i] == c[n])
				str[i] = rep[n];
		}
	}
	return (str);
}

#include "main.h"

/**
 * str_check - checks a string for a character.
 *
 * @str1: string to check
 * @c: character to check for
 *
 * Return: 1 if character is found in string, else 0
 */
int str_check(char *str1, char c)
{
	for (; *str1; str1++)
	{
		if (*str1 == c)
			return (1);
	}
	return (0);
}

/**
 * cap_string - capitalizes all words of a string
 *
 * @str: the string to capitalize
 *
 * Return: Returns modified string.
 */
char *cap_string(char *str)
{
	int i, flag;
	char *separators;

	separators = " \t\n,;.!?\"{}()'";
	flag = 1;

	for (i = 0; str[i]; i++)
	{
		if (str_check(separators, (str[i])))
			flag = 1;
		else
		{
			if (flag && (str[i] >= 97 && str[i] <= 122))
				str[i] -= 32;
			flag = 0;
		}
	}
	return (str);
}

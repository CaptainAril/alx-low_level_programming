#include "main.h"


/**
 * check_arr - checks an array for a character.
 *
 * @arr: array to check
 * @c: character to check for
 *
 * Return: 1 if character is found in array, else 0
 */
int check_arr(char arr[], char c)
{
	int i;

	for (i = 0; arr[i]; i++)
	{
		if (arr[i] == c)
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
	char c[] = {' ', '\t', '\n', ',',
	';', '.', '!', '?', '"', '(', ')', '{', '}'};
	int i;

	for (i = 0; str[i]; i++)
	{
		if (check_arr(c, str[i]) || i == 0)
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] -= 32;
				i++;
			}
		}
	}
	return (str);
}

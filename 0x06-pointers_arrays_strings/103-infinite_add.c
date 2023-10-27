#include "main.h"

/**
 * infinite_add - adds two numbers and returns the sum in a buffer
 *
 * @n1: Number to be added
 * @n2: Number to be added
 * @r: buffer to store the result
 * @size_r: buffer size
 *
 * Return: Return 0 if result can not be stored in r,
 *			else return r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, index, sum, carry, num1, num2;

	for (len1 = 0; n1[len1]; len1++)
		;				
	for (len2 = 0; n2[len2]; len2++)
		;

	index = len1 >= len2 ? len1 : len2;
	index += 1;

	if (index + 1 > size_r)
		return (0);

	r[index] = '\0';
	index -= 1;
	len1 -= 1;
	len2 -= 1;


	for (carry = 0; index >= 0; index--, len1--, len2--)
	{
		num1 = len1 >= 0 ? (n1[len1] - '0') : 0;
		num2 = len2 >= 0 ? (n2[len2] - '0') : 0;

		sum = num1 + num2 + carry;
		carry = sum > 9 ? 1 : 0;
		sum %= 10;
		r[index] = (sum + '0');

	}

	return (r[0] == '0' ? &(r[1]) : r);
}

#include "main.h"
/**
 * _abs - return abs value
 * @n : number to check
 * Return: 0 or 1
 */

int _abs(int n)
{
	int abs = n;

	if (n < 0)
		abs *= -1;

	return (abs);
	/* return (n >= 0 ? n : n * -1); */
}

#include "main.h"

/**
 * print_sign - check numbers
 * @n : number to check
 * Return: 0 or 1
 */

int print_sign(int n)
{
	int retval;

	if (n > 0)
	{
		_putchar('+');
		retval = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		retval = 0;
	}
	else if (n < 0)
	{
		_putchar('-');
		retval = -1;
	}

	return (retval);
}

#include "main.h"

/**
 * print_number - prints an integer using _putchar
 *
 * @n: integer to print
 *
 * Return: Nothing.
 */
void print_number(int n)
{
	unsigned int x = n;

	if (n < 0)
	{
		_putchar('-');
		x *= -1;
	}

	if ((x / 10) > 0)
		print_number(x / 10);
	_putchar((x % 10) + '0');
}

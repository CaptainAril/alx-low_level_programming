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
	int div, x;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	for (div = 1; n > div * 10; div *= 10)
	{}
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	x = 0;
	while (n > 0)
	{
		x = n / div;
		_putchar(x + 48);
		x *= div;
		div /= 10;
		n -= x;
	}
}

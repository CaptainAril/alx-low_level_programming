#include "main.h"

/**
 * print_times_table - prints times table
 * @n : times table to use
 * Return: void
 */

void print_times_table(int n)
{
	int x, y, val;

	if (n < 0 || n > 15)
		return;

	for (y = 0; y <= n; y++)
	{
		for (x = 0; x <= n; x++)
		{
			val = x * y;
			if (val == 0 && x == 0)
				_putchar('0' + val);
			else if (val <= 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + val);
			}
			else if (val > 9 && val <= 99)
			{
				_putchar(' ');
				_putchar('0' + val / 10);
				_putchar('0' + val % 10);
			}
			else if (val > 99)
			{
				_putchar('0' + val / 100);
				_putchar('0' + (val / 10) % 10);
				_putchar('0' + val % 10);
			}
			if (x < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

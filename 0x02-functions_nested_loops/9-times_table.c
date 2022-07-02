#include "main.h"

/**
 * times_table - prints times table
 * Return: void
 */

void times_table(void)
{
	int x, y, val;

	for (y = 0; y <= 9; y++)
	{
		for (x = 0; x <= 9; x++)
		{
			val = x * y;
			if (x == 0)
				_putchar('0' + val);
			else if (val <= 9)
			{
				_putchar(' ');
				_putchar('0' + val);
			}
			else if (val > 9)
			{
				_putchar('0' + val/10);
				_putchar('0' + val%10);
			}
			if (x < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

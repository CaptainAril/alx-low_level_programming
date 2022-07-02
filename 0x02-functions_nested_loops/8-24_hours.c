#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Return: void
 */

void jack_bauer(void)
{
	int h1, h2, m1, m2, x;
	x = 57;

	for (h1 = 48; h1 < 51; h1++)
		for (h2 = 48; h2 <= x; h2++)
			for (m1 = 48; m1 <= 53; m1++)
				for (m2 = 48; m2 <= 57; m2++)
				{
					if (h1 == 50)
						x = 51;
					_putchar(h1);
					_putchar(h2);
					_putchar(':');
					_putchar(m1);
					_putchar(m2);
					_putchar('\n');
				}

}

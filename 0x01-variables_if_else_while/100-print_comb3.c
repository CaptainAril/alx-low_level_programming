#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x, y;

	for(x = 48; x < 58; x++)
	{
		for (y = 48; y < 58; y++)
		{
			if (!(x == y || x > y))
			{
				putchar(x);
				putchar(y);
				if (x == 56 && y == 57)
					break;
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');

	return (0);
}

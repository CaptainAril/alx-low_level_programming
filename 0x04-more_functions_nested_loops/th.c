#include <stdio.h>
#include "main.h"

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	_putchar(n);
}

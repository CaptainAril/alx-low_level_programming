#include <stdio.h>

/**
 * main - main block
 * Description: prints the first 50 Fibonacci nubers
 * Return: 0
 */

int main(void)
{
	long int a = 1, b = 1, fib_num, i;

	for (i = 0; i < 50; i++)
	{
		fib_num = a;
		printf("%li", fib_num);
		a += b;
		b = fib_num;
		if (i < 49)
			printf(", ");
	}
	putchar('\n');
	return (0);
}

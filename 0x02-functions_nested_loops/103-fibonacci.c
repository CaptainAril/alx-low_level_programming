#include <stdio.h>

/**
 * main - main block
 * Description: finds and prints the sum of even-valued fibonacci terms
 * not greater than 4,000,000
 * Return: 0
 */

int main(void)
{
	int a = 0, b = 1, fib_num = 0, sum;

	while (fib_num < 4000000)
	{
		fib_num = a + b;
		a = b;
		b = fib_num;
		if (fib_num % 2 == 0)
			sum += fib_num;
	}
	printf("%i\n", sum);
	return (0);
}

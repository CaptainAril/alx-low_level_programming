#include <stdio.h>

/**
 * main - finds the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	long num = 612852475143;
	long divisor = 2;
	long largst_prime = 0;

	while (num != 1)
	{
		if (num % divisor == 0)
		{
			num = num / divisor;
			largst_prime = divisor;
		}
		divisor += 1;
	}
	printf("%ld\n", largst_prime);
	return (0);
}

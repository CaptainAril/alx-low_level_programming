#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned int n;

	n = binary_to_uint("0000");
	printf("%u\n", n);
	n = binary_to_uint("0001");
	printf("%u\n", n);
	n = binary_to_uint("0010");
	printf("%u\n", n);
	n = binary_to_uint("0011");
	printf("%u\n", n);
	n = binary_to_uint("0100");
	printf("%u\n", n);
	n = binary_to_uint("0101");
	printf("%u\n", n);
	n = binary_to_uint("0110");
	printf("%u\n", n);
	n = binary_to_uint("0111");
	printf("%u\n", n);
	n = binary_to_uint("1000");
	printf("%u\n", n);
	n = binary_to_uint("1001");
	printf("%u\n", n);
	n = binary_to_uint("1010");
	printf("%u\n", n);
	n = binary_to_uint("000100000100000000000110010010");
	printf("%u\n", n);
	return (0);
}

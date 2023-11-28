#include "main.h"
#include <stdio.h>


/**
 * print_diagsums - prints the sum of the two diagonals of a square
 * matrix of integers.
 *
 * @a: pointer to matrix
 * @size: size of matrix
 */
void print_diagsums(int *a, int size)
{
	int i, diagASum, diagBSum;

	diagASum = diagBSum = 0;

	for (i = 0; i < size; i++)
		diagASum += *(a + i * size + i);

	for (i = 0; i < size; i++)
		diagBSum += *(a + i * size + (size - 1 - i));

	printf("%d, %d\n", diagASum, diagBSum);
}

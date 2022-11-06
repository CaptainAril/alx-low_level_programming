#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using Binary search algorithm
 *
 * @array: pointer to the first element in the array
 * @size: number of elements in the arra
 * @value: value to search for
 * Return: Return the index of the found value
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l, r, m;
	size_t loop;

	if (array == NULL)
		return (-1);

	r = size - 1;
	l = 0;

	while (l <= r)
	{
		m = (l + r) / 2;
		printf("Searching in array: ");
		for (loop = l; loop < r + 1; loop++)
		{
			printf("%ld", loop);
			if (loop < r)
				printf(", ");
		}
		printf("\n");
		if (array[m] == value)
			return (m);
		else if (array[m] > value)
			r = m - 1;
		else
			l = m + 1;
	}
	return (-1);
}

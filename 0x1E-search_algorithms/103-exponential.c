#include <stdio.h>
#include "search_algos.h"

/**
 * binarySearch - searches for a value in array using binary search
 *
 * @array: Array to be searched
 * @l: beginning of search range
 * @r: end of search range
 * @x: value to search for
 * Return: Returns index of value found, or -1 if array is null,
 *		or value not found.
 */
int binarySearch(int *array, int l, int r, int x)
{
	int mid, i;

	if (array == NULL)
		return (-1);
	if (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			printf("%d", array[i]);
			if (i < r)
				printf(", ");
		}
		printf("\n");
		mid = (l + (r - l) / 2);

		if (array[mid] == x)
			return (mid);
		else if (array[mid] > x)
			return (binarySearch(array, l, mid - 1, x));
		return (binarySearch(array, mid + 1, r, x));
	}
	return (-1);
}


/**
 * exponential_search - Searches for a value in a sorted array using
 *		Exponential search algorithm
 *
 * @array: pointer to the first element of array to search in
 * @size: number of elements in the array
 * @value: value to search for
 * Return: Returns the first index where value is located,
 *		or -1 if array is null, or value not found.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i, prev;
	
	if (!array || size == 0)
		return (-1);
	if (array[0] == value)
		return (0);
	i = 1;
	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%li] = [%d]\n", i, array[i]);
		i = i * 2;
		prev = i / 2;
	}
	if (i >= size)
		i = size - 1;
	printf("Value found between indexes [%li] and [%li]\n", prev, i);
	return (binarySearch(array, prev, i, value));
}

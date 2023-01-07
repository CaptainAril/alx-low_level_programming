#include <stdio.h>
#include "search_algos.h"


/**
 * advanced_binary - searches for a value in a sorted array of integers
 *		using a binary search algorithm that returns the index of the first
 *		matched value in the array.
 *
 * @array: pointer to the first element of the array to search
 * @size: number of elements in the array
 * @value: value to search for
 * Return: Returns the index of the first occurrance to the value,
 *		or -1 if array is null, or value not found.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (binarySearch(array, 0, size - 1, value));
}


/**
 * binarySearch - searches for a value in array using binary search
 *
 * @array: Array to be searched
 * @l: beginning of search range
 * @r: end of search range
 * @x: value to search for
 * Return: Returns index of value found, or -1 if array is null,
 *              or value not found.
 */
int binarySearch(int *array, int l, int r, int x)
{
	int mid, i;

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

		if (array[mid] == x && (mid == l || array[mid - 1] != x))
			return (mid);
		if (array[mid] >= x)
			return (binarySearch(array, l, mid, x));
		return (binarySearch(array, mid + 1, r, x));
	}
	return (-1);
}

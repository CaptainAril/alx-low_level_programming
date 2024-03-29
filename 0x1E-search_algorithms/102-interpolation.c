#include <stdio.h>
#include "search_algos.h"

/**
 * interpolation_search - Function that searches for a value in a sorted array
 * of integers using the Interpolation search algorithm.
 *
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: value to search for
 * Return: Returns the index of the value,
 *		or -1 if array is null, or array not found.
 */
int interpolation_search(int *array, size_t size, int value)
{
	int high, low;
	size_t pos;

	low = 0;
	high = size - 1;

	if (array == NULL || size == 0)
		return (-1);

	while ((array[high] != array[low]) && (value >= array[low]) &&
	(value <= array[high]))
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
		* (value - array[low]));

		printf("Value checked array[%ld] = [%i]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (value < array[pos])
			high = pos - 1;
		else if (value > array[pos])
			low = pos + 1;
	}

	printf("Value checked array[%ld] is out of range\n", pos);
	return (-1);
}

#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Function that searches for a value in a sorted array of
 * integers using the Jump search algorithm
 *
 * @array: pointer to the first element of the array to search
 * @size: number of elements in the array
 * @value: value to search for
 * Return: Returns the -1 if array is null, or value not found in array,
 *		or index of value if found.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t start, jump;

	start = 0;
	jump = 0;

	if (array == NULL || size == 0)
		return (-1);

	while (array[jump] < value && jump < size)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		start = jump;
		jump += sqrt(size);

	}

	printf("Value found between indexes [%ld] and [%ld]\n", start, jump);

	for (; start <= jump && start < size && value >= array[start]; start++)
	{
		printf("Value checked array[%ld] = [%d]\n", start, array[start]);
		if (array[start] == value)
			return (start);
	}

	return (-1);
}

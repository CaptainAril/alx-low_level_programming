#include <stdio.h>
#include "search_algos.h"

/**
* linear_search - This function searches for a value in an array of integers
*	using the Linear search.
* @array: pointer to the first element of the arrary to search
* @size: the number of elements in the array
* @value: the value to search for
* Return: Return the current index if value is found in the array
*		else return -1 if value not found in array or array is == NULL.
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

#include <stdio.h>
#include <math.h>
#include "search_algos.h"


/**
 * jump_list - searches for a value in a sorted linked list of integers
 *	using Jump search algorithm
 *
 * @list: pointer to the head of the linked list to search in
 * @size: number of nodes in the list
 * @value: value to search for
 * Return: Return a pointer to the first node where value is located,
 *		or NULL if value is not present, or head is null.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *prev, *pos;
	size_t jump;

	if (list == NULL || size == 0)
		return (NULL);

	jump = 0;
	pos = list;
	while (pos->n < value)
	{
		jump += sqrt(size);
		if (jump > size - 1)
			jump = size - 1;
		prev = pos;
		while (pos->index < jump && pos->next != NULL)
		{
			pos = pos->next;
		}
		printf("Value checked at index [%ld] = [%d]\n", pos->index, pos->n);
		if (pos->next == NULL)
			break;
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
	prev->index, pos->index);
	while (prev->index <= pos->index)
	{
		printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);

		if (prev->next == NULL)
			break;
		prev = prev->next;
	}
	return (NULL);
}

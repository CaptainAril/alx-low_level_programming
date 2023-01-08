#include <stdio.h>
#include "search_algos.h"


/**
 * linear_skip - searches for a value in a sorted skip list
 *
 * @list: pointer to the head of the skip list to search
 * @value: value to search for
 * Return: Return a pointer to the first node where value is located,
 *		or null if head in null, or value not found.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *pos, *temp;

	if (list == NULL)
		return (NULL);

	pos = temp = list;

	while (pos && pos->n < value)
	{
		if (pos->express)
		{
			pos = pos->express;
			printf("Value checked at index [%ld] = [%d]\n", pos->index, pos->n);
		}
		else
		{
			while (pos->next)
				pos = pos->next;
			break;
		}
	}
	while (temp->express != pos && temp->express)
		temp = temp->express;

	printf("Value found between indexes [%ld] and [%ld]\n",
	temp->index, pos->index);
	while (temp->index <= pos->index && temp)
	{
		printf("Value checked at index [%ld] = [%d]\n", temp->index, temp->n);
		if (temp->n == value)
			return (temp);
		if (temp->next)
			temp = temp->next;
		else
			return (NULL);

	}
	return (temp);
}

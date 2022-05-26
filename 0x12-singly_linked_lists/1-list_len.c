#include "lists.h"

/**
 * list_len - returns the number of elements in a list
 * @h: points to the head of a singly linked list
 * Return: Returns the number of elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}

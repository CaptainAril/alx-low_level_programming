#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: points to the head node of the linked list
 *
 * Return: number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	for (count = 0;  h != NULL; count++)
		h = h->next;
	return (count);
}

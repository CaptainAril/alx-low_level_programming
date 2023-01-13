#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: points to  the head of a linked list
 * Return: returns the number of elements in the list
 */

size_t listint_len(const listint_t *h)
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

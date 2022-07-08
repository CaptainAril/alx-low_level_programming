#include "lists.h"

/**
 * print_dlistint - prints all the elements of a list
 * @h: points to head node of a list
 *
 * Return: Returns the number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}

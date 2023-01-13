#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a list
 * @h: points to the head of a linked list
 * Return: Returns the numbers of node in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}

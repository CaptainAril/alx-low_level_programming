#include "lists.h"

/**
 * print_listint_safe - prints a linked list
 * @head: points to the head node of a linked list
 * Return: returns the number of nodes in the list
 * or 98 if fail
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count;
	void *p = &head;

	count = 0;

	while (head != NULL)
	{
		printf("[%p] %i\n", p, head->n);
		head = head->next;
		count++;
	}
	return (count);
}

#include "lists.h"

/**
 * free_dlistint_t - frees a linked list
 * @head: pointer to head node of linked list
 *
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

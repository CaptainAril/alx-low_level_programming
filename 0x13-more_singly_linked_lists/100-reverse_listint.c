#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: points to the head node of a linked list
 * Return: returns a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next, *current;

	prev = NULL;
	next = NULL;
	current = *head;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;

	return (*head);
}

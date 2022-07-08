#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a linked list
 * @head: pointer to the head node of a linked list
 * @n: integer value for new node
 *
 * Return: the address of the new element
 *         or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *last;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	last = *head;
	for (; last->next != NULL; )
		last = last->next;
	last->next = new_node;
	new_node->next = NULL;
	new_node->prev = *head;

	return (new_node);
}

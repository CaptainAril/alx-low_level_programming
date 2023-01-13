#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: points to the head node of a linked list
 * @n: integer data to be stored in the new node
 * Return: returns the address of the new node
 * or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}

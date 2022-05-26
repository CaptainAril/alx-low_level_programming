#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - add a new node at the end of a linked list
 * @head: points to the head of a linlked list
 * @n: integer value to be stored in the new linked list
 * Return: Returns the address of the new node
 * or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->next = NULL;
	new_node->n = n;
	temp = *head;

	if (temp == NULL)
		*head = new_node;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}
	return (*head);
}

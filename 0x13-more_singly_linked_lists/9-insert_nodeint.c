#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position (idx)
 * @head: points to the head node of a linked list
 * @idx: index of the list where the new node should be added.
 * Index starts at 0
 * @n: data of new node to be added
 * Return: return the address of the new node
 * or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;

	temp = *head;
	while (idx != 1)
	{
		temp = temp->next;
		idx--;
		if (temp == NULL)
			return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	new_node->n = n;
	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}

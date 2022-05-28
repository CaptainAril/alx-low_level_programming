#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node
 * at the index of 'index' of a linked list
 * @head: points to the head node of a linked list
 * @index: the index of the node that should be deleted
 * Return: Return 1 for SUCCESS, or -1 for FAIL
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *current;

	current = *head;
	temp = *head;

	if (index == 0)
	{
		*head = current->next;
		free(current);
		current = NULL;
	}

	while(index != 1)
	{
		if (current == NULL)
			return (-1);
		current = current->next;
		index--;
	}
	temp = current->next;
	current->next = temp->next;
	free(temp);
	temp = NULL;

	return (1);
}

#include "lists.h"

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

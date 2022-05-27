#include "lists.h"

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *current;
	unsigned int count;

	count = 0;
	current = *head;
	temp = *head;
	while((count + 1) >= index)
	{
		current = current->next;
		count++;
		if (current == NULL)
			return (-1);
	}
	if (index == 0)
		*head = temp->next;
	else
	{
		temp = current->next;
		current->next = temp->next;
	}
	temp = NULL;
	free(temp);

	return (1);
}

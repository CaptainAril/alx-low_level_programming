#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: points to the head of a linked list
 * @index: index of the node to be returned
 * Return: return the nth node
 * or 0 if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int count;

	count = 0;
	temp = head;

	while (count != index)
	{
		temp = temp->next;
		count++;
		if (temp == NULL)
			return (NULL);
	}
	return (temp);
}

#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * and returns the head node's data (n)
 * @head: points to the head node of a linked list
 * Return: Returns the data (n) of the head node
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	temp = *head;

	if (temp == NULL)
		return (0);

	n =  temp->n;
	*head = temp->next;
	free(temp);
	return (n);
}

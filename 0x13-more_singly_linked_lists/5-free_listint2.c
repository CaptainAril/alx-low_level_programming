#include "lists.h"

/**
 * free_listint2 - function that frees a list, and sets head to NULL
 * @head: points to the head of a linked list
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *next;

	temp = *head;

	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
	*head = temp;
	temp = NULL;
}

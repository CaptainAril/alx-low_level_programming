#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a list
 * @head: points to the head of a linked list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}

#include "lists.h"

/**
 * free_list - function that frees a list
 * @head: points to the head of a linked list
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}

#include "lists.h"
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning of a list
 * @head: head of the linked list
 * @str: string stored in the list
 * Return: Returns the address of the new node (Success)
 * or NULL if fail
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t num_char;
	
	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (num_char = 0; str[num_char]; num_char++)
		;
	new_node->len = num_char;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}

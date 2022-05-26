#include "lists.h"

/**
 * add_node_end - add a new node at the end of a list
 * @head: points to the head of the linked list
 * @str: string to be stored in the linked list
 * Return: Return the address of head
 * or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	size_t num_char;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	for (num_char = 0; str[num_char]; num_char++)
		;
	new_node->len = num_char;
	new_node->next = NULL;
	temp = *head;

	if (temp == NULL)
		*head = new_node;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}
	return (*head);
}

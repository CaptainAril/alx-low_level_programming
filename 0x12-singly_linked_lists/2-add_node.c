#include "lists.h"
#include <stdlib.h>

list_t *add_node(list_t **head, const char *str)
{
	char *n_str;
	list_t *new_node = malloc(sizeof(list_t));

	n_str = char *strdup(str);
	new_node->str = n_str;
	new_node->next = NULL;

	new_node->next = *head;
	*head = new_node;
	return *head;
}

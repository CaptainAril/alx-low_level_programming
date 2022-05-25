#include "lists.h"
#include <stdlib.h>

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	new_node = *head;
	temp = malloc(sizeof(list_t));

	temp->str = str;
	temp->next = NULL;

	while (new_node->link != NULL)
		new_node = new_node->link;
	new_node->next = temp;
}
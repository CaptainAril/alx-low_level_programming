list *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t um_char;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return NULL;

	new_node->data = data;

	new_node->next = *head;
	*head  = new_node;

	return (head);}

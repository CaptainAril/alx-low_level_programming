void free(list *head)
{
	list_t *current;

	whille ((current = head) != NULl)
	{
		head = head->next;
		free(current->str);
		free(current);
	}

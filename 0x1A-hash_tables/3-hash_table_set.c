#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table we want to add or update key/value to
 * @key: the key. @Key cannot be an empty sting
 * @value: the value associated with the key.
 * Value must be duplicated, and can be an empty string
 *
 * Return: 1 if successful; 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int size, index;
	hash_node_t *head;
	char *value_t;

	if (key[0] == '\0'|| ht == NULL || key == NULL || value == NULL)
		return (0);

	value_t = strdup(value);
	size = ht->size;
	index = key_index((const unsigned char *) key, size);
	head = ht->array[index];

	if (!add_node(head, (char *) key, value_t))
		return (0);

	return (1);
}

/**
 * add_node - adds node to beginning of linked list
 * @head: head of the linked list
 * @key: key value
 * @value: value corresponding to the key
 *
 * Return: Returns pointer to head of linked list;
 *         NULL if unsuccessful
 */
hash_node_t *add_node(hash_node_t *head, char *key, char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->key = strdup(key);
	new_node->value = value;
	new_node->next = head;
	head = new_node;

	return (head);
}

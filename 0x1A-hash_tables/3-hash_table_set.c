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
	hash_node_t *new_node;
	char *value_t, *key_t;

	if (key[0] == '\0'  || ht == NULL || key == NULL || value == NULL)
		return (0);

	value_t = strdup(value);
	if (value_t == NULL)
		return (0);
	key_t = strdup(key);
	if (key_t == NULL)
		return (0);

	size = ht->size;
	index = key_index((const unsigned char *) key, size);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->key = key_t;
	new_node->value = value_t;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}

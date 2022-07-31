#include "hash_tables.h"

/**
 * hash_table_get - retrieves the value associated with a key
 * @ht: the hash table to look into
 * @key: the key to search for
 *
 * Return: Return the value associated with the key;
 * or NULL if the key could not be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	index = key_index((const unsigned char *) key, ht->size);

	node = ht->array[index];
	if (node == NULL)
		return (NULL);
	return (node->value);
}

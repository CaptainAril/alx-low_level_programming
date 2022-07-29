#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
	{
		free(ht);
		return NULL;
	}
	ht->size = size;
	ht->array = calloc((ht->size), sizeof(hash_node_t));
	return ht;
}

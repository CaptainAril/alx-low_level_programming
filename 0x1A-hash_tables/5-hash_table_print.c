#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 *
 * Return: Nothing
 *
 * Description: Prints the key/value
 * in the order that they appear in the array of the hash table.
 * If @ht is NULL, don't print anything.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;

	printf("{");
	for (i = 0; i < ht->size && ht; i++)
	{
		node = ht->array[i];

		while (node)
		{
			printf("'%s': '%s (%lu)'", node->key, node->value, i);
			if (node->next || ht->array[i + 1] != NULL)
				printf(", ");
			printf("%s - (%lu)", (char *)ht->array[i+1], i +  1);
			node = node->next;

			if (ht->array[i + 1])
				printf(", ");
		}
	}
	printf("}\n");
}

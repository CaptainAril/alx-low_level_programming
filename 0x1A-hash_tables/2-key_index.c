#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: the key string
 * @size: the size of the array of the hash table
 *
 * Return: Returns the array index for the key/value pair
 * to be stored in the hash table array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash, index;

	hash = hash_djb2(key);
	index = hash % size;

	return (index);
}

#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: the key
 * @size: the size of the array of the hash table
 *
 * Return: an int
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx;
	unsigned long int hash_value = hash_djb2(key);

	idx = hash_value % size;

	return (idx);
}

#include "hash_tables.h"

/**
 * hash_table_create  - creates a hash table
 * @size: the size of the arrray
 *
 * Return: returns a pointer to the hash table or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newtable = malloc(sizeof(hash_table_t));

	if (newtable == NULL)
	{
		return (NULL);
	}
	newtable->size = size;

	newtable->array = calloc(size, sizeof(hash_node_t *));
	if (newtable->array == NULL)
	{
		free(newtable);
		return (NULL);
	}
	return (newtable);
}

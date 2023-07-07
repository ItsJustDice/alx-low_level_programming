#include "hash_tables.h"
/**
 *hash_table_get - function that retrieves value associated with a key
 *@ht: hash table to look into
 *@key: key to find value
 *Return: the value associated with the element else NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *matrix;
	unsigned long int index;
	/* Check if key & hash table are valid pointers */
	if (key == NULL || ht == NULL)
		return (NULL);
	/* Calculate index using key & hash table's size */
	index = key_index((const unsigned char *)key, ht->size);
	matrix = ht->array[index];
	/* Iterate through linked list at calculated index */
	for (; matrix != NULL; matrix = matrix->next)
	{
		/* Check if key matches current node's key */
		if (strcmp(matrix->key, key) == 0)
			return (matrix->value); /* Return value associated with key */
	}
	/* If key is not found, return NULL */
	return (NULL);
}

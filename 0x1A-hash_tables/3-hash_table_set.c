#include "hash_tables.h"
/**
 *hash_table_set - adds element to hash table
 *@ht: pointer to hash
 *@key: pointer to key
 *@value: value to add
 *Return: 1 if is success or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long index, size;
	hash_node_t *nw_node;
	/*  Check if the hash table, key, and value are valid pointers */
	if (ht  == NULL || key == NULL || value == NULL)
		return (0);
	size = ht->size;
	/* Calculate index value using the key & table size */
	index = key_index((const unsigned char *)key, size);
	/* key already exists at the calculated index */
	if (ht->array[index] != NULL && strcmp(ht->array[index]->key, key) == 0)
	{
		/* Update value of existing node with new value */
		ht->array[index]->value = strdup(value);
		return (1);
	}
	/* Create a new node */
	nw_node = malloc(sizeof(hash_node_t));
	if (nw_node == NULL)
		return (0);
	/* Copy key & value into new node */
	nw_node->key = strdup(key);
	nw_node->value = strdup(value);
	/* Set next pointer of new node to current node at calculated index */
	nw_node->next = ht->array[index];
	ht->array[index] = nw_node;
	return (1);
}

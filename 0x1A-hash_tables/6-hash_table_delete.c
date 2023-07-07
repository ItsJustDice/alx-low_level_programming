#include "hash_tables.h"
/**
 * hash_table_delete - Deletes hash table
 * @ht: A pointer to hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht; /* Store refer to hash table in 'head' variable */
	hash_node_t *node_n, *lop; /* Declare variables for iterating linked lists */
	unsigned long int j; /* Declare variable for iteration */

	for (j = 0; j < ht->size; j++)
	{
		if (ht->array[j] != NULL) /* Check if current bucket is not empty */
		{
			node_n = ht->array[j]; /* Start with 1st node in linked list */
			while (node_n != NULL)
			{
				lop = node_n->next;
				free(node_n->key); /* Free memory allocated for key */
				free(node_n->value); /* Free memory allocated for value */
				free(node_n); /* Free memory allocated for current node */
				node_n = lop; /* Move to following node in linked list */
			}
		}
	}
	free(head->array); /* Free memory allocated for hash table's array */
	free(head); /* Free memory allocated for hash table itself */
}

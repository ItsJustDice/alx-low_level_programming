#include "hash_tables.h"
/**
 * hash_table_create - Creates a hash table
 * @size: The size of the array
 * Return: If an error occurs - NULL
 *         Other - a pointer to new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tbl; /* Set-up a hash table structure pointer */
	unsigned long int j; /* create the 'j' unsigned long int var */

	tbl = malloc(sizeof(hash_table_t)); /* memory space for hash tble structure */
	if (tbl == NULL) /* Check if the memory allocation was successful */
		return (NULL); /* memory allocation fails, return NULL */
	tbl->size = size;
	tbl->array = malloc(sizeof(hash_node_t *) * size);
	if (tbl->array == NULL) /* Check if memory allocation was successful */
		return (NULL);
	for (j = 0; j < size; j++)
		tbl->array[j] = NULL; /* Set the hash node array's elements */
	/* all to NULL at the beginning */

	return (tbl); /* Return the created hash table structure */
}

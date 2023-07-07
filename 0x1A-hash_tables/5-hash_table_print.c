#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash table to print
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int j;
	hash_node_t *lop;
	char nob = 0; /* 0 while no data has been printed yet */

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{"); /* Print opening brace for dictionary */
	for (j = 0; j < ht->size; j++)
	{
		lop = ht->array[j];
		while (lop != NULL)
		{
			if (nob == 1)
				printf(", "); /* Add comma before each key-value pair, except 1st one */
			printf("'%s': '%s'", lop->key, lop->value); /* Print key-value pair */
			nob = 1; /* Set flag to indicate that data is printed */
			lop = lop->next; /* Move to following node in linked list */
		}
	}
	printf("}\n"); /* Print closing brace for dictionary & new line character */
}

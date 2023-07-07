#include "hash_tables.h"
/**
 * shash_table_create - creates a sorted hash table
 * @size: size of the hash table
 * Return: pointer to the new table, or NULL on failure
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *lop; /* Declare pointer variable for hash table */
	unsigned long int j; /* Declare variable for iteration */

	lop = malloc(sizeof(shash_table_t)); /* Allocate memory for hash table */
	if (lop == NULL)
		return (NULL); /* Return NULL if memory allocation fails */
	lop->size = size; /* Set size of hash table */
	lop->shead = NULL; /* Set head of sorted linked list to NULL */
	lop->stail = NULL; /* Set tail of sorted linked list to NULL */
	lop->array = malloc(sizeof(shash_node_t) * size);
	if (lop->array == NULL)
	{
		free(lop); /* Free memory allocated for hash table */
		return (NULL); /* Return NULL if memory allocation fails */
	}
	for (j = 0; j < size; j++)
	{
		lop->array[j] = NULL; /* Set each element of the array to NULL */
	}
	return (lop); /* Return created hash table */
}

/**
 * make_shash_node - makes node for sorted hash table
 * @key: key for data
 * @value: data to be stored
 * Return: pointer to new node, or NULL if failure
 */
shash_node_t *make_shash_node(const char *key, const char *value)
{
	shash_node_t *chip; /* Declare pointer variable for hash node */

	chip = malloc(sizeof(shash_node_t)); /* Allocate memory for hash node */
	if (chip == NULL)
		return (NULL); /* Return NULL if memory allocation fails */
	chip->key = strdup(key); /* Duplicate & store key in hash node */
	if (chip->key == NULL)
	{
		free(chip); /* Free memory allocated for hash node */
		return (NULL); /* Return NULL if key duplication fails */
	}
	chip->value = strdup(value); /* Duplicate & store value in hash node */
	if (chip->value == NULL)
	{
		free(chip->key); /* Free memory allocated for key */
		free(chip); /* Free memory allocated for hash node */
		return (NULL);
	} /* Set the next, snext, and sprev pointers to NULL */
	chip->next = chip->snext = chip->sprev = NULL;
	return (chip); /* Return created hash node */
}

/**
 * add_to_sorted_list - add a node to sorted (key's ASCII) linked list
 * @table: sorted hash table
 * @node: node to add
 * Return: void
 */
void add_to_sorted_list(shash_table_t *table, shash_node_t *node)
{
	shash_node_t *pop;
	/* If skip list is empty, make new node head & tail */
	if (table->shead == NULL && table->stail == NULL)
	{
		table->shead = table->stail = node;
		return;
	}
	pop = table->shead;
	while (pop != NULL)
	{
		/* Compare keys of new node & current node */
		if (strcmp(node->key, pop->key) < 0)
		{
			/* Insert new node before current node */
			node->snext = pop;
			node->sprev = pop->sprev;
			pop->sprev = node;
			/* Update previous node's next pointer */
			if (node->sprev != NULL)
				node->sprev->snext = node;
			else
				/* Update head if new node becomes first node */
				table->shead = node;
			return; /* Insertion completed */
		} /* Move to following node */
		pop = pop->snext;
	} /* If new node has highest key, make it new tail */
	node->sprev = table->stail;
	table->stail->snext = node;
	table->stail = node;
}

/**
 * shash_table_set - sets key to value in hash table
 * @ht: sorted hash table
 * @key: key to data
 * @value: data to add
 * Return: 1 on success, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *new_v;
	shash_node_t *count, *len;
	/* Check for invalid input or empty hashtable/key/value */
	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	/* Calculate the index for the given key in the hashtable */
	index = key_index((const unsigned char *)key, ht->size);
	len = ht->array[index];
	while (len != NULL)
	{
		if (strcmp(len->key, key) == 0)
		{
			new_v = strdup(value);
			if (new_v == NULL)
				return (0);
			free(len->value);
			len->value = new_v;
			return (1);
		}
		len = len->next;
	}
	count = make_shash_node(key, value);
	if (count == NULL)
		return (0);
	count->next = ht->array[index];
	ht->array[index] = count;
	add_to_sorted_list(ht, count);
	return (1);
}

/**
 * shash_table_get - retrieve a value from the hash table
 * @ht: hash table
 * @key: key to the data
 * Return: the value associated with key, or NULL on failure
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *temp;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}

/**
 * shash_table_print - prints a sorted hash table
 * @ht: hash table to print
 * Return: void
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *ght;
	char slip = 0; /* 0 before printing any data, 1 after*/

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	ght = ht->shead;
	while (ght != NULL)
	{
		if (slip == 1)
			printf(", ");
		printf("'%s': '%s'", ght->key, ght->value);
		slip = 1;
		ght = ght->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints a sorted hash table in reverse
 * @ht: hash table to print
 * Return: void
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *ght;
	char slip = 0; /* 0 before printing any data, 1 after*/

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	ght = ht->stail;
	while (ght != NULL)
	{
		if (slip == 1)
			printf(", ");
		printf("'%s': '%s'", ght->key, ght->value);
		slip = 1;
		ght = ght->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a sorted hash table
 * @ht: hash table to delete
 * Return: void
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int j;
	shash_node_t *next;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;
	for (j = 0; j < ht->size; j++)
	{
		while (ht->array[j] != NULL)
		{
			next = ht->array[j]->next;
			free(ht->array[j]->key);
			free(ht->array[j]->value);
			free(ht->array[j]);
			ht->array[j] = next;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->shead = ht->stail = NULL;
	ht->size = 0;
	free(ht);
}

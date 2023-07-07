#include "hash_tables.h"
/**
 * key_index - generates the key using hash_djb2
 * @key: pointer to the key
 * @size: size of table
 * Return: index key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/* Utilize hash_djb2 algorithm, determine hash */
       /* value & multiply it by table size */
	return (hash_djb2(key) % size);
}

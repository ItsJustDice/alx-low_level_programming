#include "hash_tables.h"
/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int had; /* Create the 'had' unsigned long int var */
	int i; /* Create the 'i' integer var */

	had = 5381; /* Set value 5381 for 'had' during initialization */
	while ((i = *str++))
	{
		/* Utilizing djb2 algorithm, determine hash value: had * 33 + c */
		had = ((had << 5) + had) + i; /* had * 33 + i */
	}
	return (had); /* Return the final hash value */
}

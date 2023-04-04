#include "lists.h"
/**
 * insert_nodeint_at_index - Entry point
 * Description: function that inserts a new node at a given position
 * @head: Integer
 * @idx: Index of the list where the new node should be added
 * @n: new node
 * Return: NULL or new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *node;
	listint_t *matrix = *head;
	/* allocates memory for node */
	node = malloc(sizeof(listint_t));
	/* check if allocation is successful */
	if (!node)
	{
		return (NULL);
	}
	/* assign n value to node */
	node->n = n;

	if (idx == 0)
	{
		node->next = matrix;
		*head = node;
		return (node);
	}
	/* start at head of list */
	matrix = *head;
	for (j = 0; matrix && j < idx; j++)
	{
		if (j == idx - 1)
		{
			node->next = matrix->next;
			matrix->next = node;
			return (node);
		}
		matrix = matrix->next;
	}
	return (NULL);
}

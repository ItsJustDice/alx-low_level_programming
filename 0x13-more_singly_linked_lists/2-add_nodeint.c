#include "lists.h"
/**
 * add_nodeint - Entry point
 * Description: adds a new node at the beginning of a linked list
 * @head: Integer
 * @n: Integer
 * Return: to new node, NULL is failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *len;
	/* allocates memory for nodes */
	len = malloc(sizeof(listint_t));
	if (!len)
	{
		return (NULL);
	}
	/* sets value of nodes to n */
	len->n = n;
	/* sets following node to current head */
	len->next = *head;
	*head = len;

	return (len);
}

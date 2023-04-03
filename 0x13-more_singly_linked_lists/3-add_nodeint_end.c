#include "lists.h"
/**
 * add_nodeint_end - Entry point
 * Description: adds a node at the end of a linked list
 * @head: Integer
 * @n: Integer
 * Return: pointer to new element, NULL if failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *count;
	listint_t *node;

	/* allocates memory for count */
	count = malloc(sizeof(listint_t));
	if (!count)
	{
		return (NULL);
	}
	/* sets values of count */
	count->n = n;
	count->next = NULL;

	/* if list is empty then count can be made as first node */
	if (*head == NULL)
	{
		*head = count;
		return (count);
	}
	/* alternate to last node */
	node = *head;
	while (node->next)
	{
		node = node->next;
	}
	/* make count the last node in the list */
	node->next = count;

	return (count);
}

#include "lists.h"
/**
 * listint_len - Entry point
 * Description: returns the number of elements in a linked lists
 * @h: Integer
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t new = 0;
	/* loop through list till end is reached */
	while (h != NULL)
	{
		/* accrual counter for every node */
		new++;
		/* moves to following node */
		h = h->next;
	}
	/* returns to final node in count */
	return (new);
}

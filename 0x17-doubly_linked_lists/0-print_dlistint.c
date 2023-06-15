#include "lists.h"
/**
 * print_dlistint - Prints all the elements of a
 * @h: The head of the dlistint_t list
 * Return: The number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count; /* Nodes' number is tracked using a variable */

	count = 0;

	if (h == NULL)
		return (count); /* Give a count of zero if the doubly linked list is empty */

	while (h->prev != NULL)
		h = h->prev; /* set the cursor at the top of the doubly linked list */

	while (h != NULL)
	{
		printf("%d\n", h->n); /* Print the node's value at this time */
		count++; /* Increase the number */
		h = h->next; /* Place the cursor on the next node */
	}
	return (count); /* Put the pointer on the next node */
}

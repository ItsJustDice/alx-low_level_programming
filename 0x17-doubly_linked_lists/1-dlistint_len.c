#include "lists.h"
/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list
 * @head: A pointer to the head of the dlistint_t list
 * @n: The integer for the new node to contain
 * Return: If the function fails - NULL or adress of new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new; /* state new node n*/
	dlistint_t *h;

	new = malloc(sizeof(dlistint_t)); /* assign memory for new node */
	if (new == NULL)
		return (NULL); /* if assigned allocation fails, return NULL */

	new->n = n; /* place value of new node to input value */
	new->prev = NULL; /* set former pointer of new node to NULL */
	h = *head; /* set following point of new node to current head */

	if (head != NULL)
	{
		while (h->prev != NULL)
			h = h->prev; /* Move pointer to head of doubly linked list */
	}

	new->prev = h; /* Set prev pointer of new node to current head or NULL */

	if (h != NULL)
		h->prev = new; /* If the list is not empty */
	/* set the previous pointer of the current head to the new node */

	*head = new; /* set new node as new head of the list */

	return (new);
}

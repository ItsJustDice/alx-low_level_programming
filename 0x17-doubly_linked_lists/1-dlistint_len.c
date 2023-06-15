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

	new = malloc(sizeof(dlistint_t)); /* assign memory for new node */
	if (new == NULL)
		return (NULL); /* if assigned allocation fails, return NULL */

	new->n = n; /* place value of new node to input value */
	new->prev = NULL; /* set former pointer of new node to NULL */
	new->next = *head; /* set following point of new node to current head */

	if (*head != NULL)
		(*head)->prev = new;
	/* if list has any items, set prev pointer of current head to new node */

	*head = new; /* set new node as new head of the list */

	return (new);
}

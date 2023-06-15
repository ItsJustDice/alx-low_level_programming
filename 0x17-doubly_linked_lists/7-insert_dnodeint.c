#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node in a dlistint_t
 *                            list at a given position
 * @h: A pointer to the head of the dlistint_t list
 * @idx: The position to insert the new node
 * @n: The integer for the new node to contain
 * Return: If the function fails - NULL or address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *new;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--) /* Iterate until prev node of index is reached */
	{
		tmp = tmp->next; /* Move the temporary pointer to the next node */
		if (tmp == NULL)
			return (NULL);
	}

	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t)); /* Allocate memory for the new node */
	if (new == NULL)
		return (NULL); /* If memory allocation fails, return NULL */

	new->n = n; /* Assign the given value to the new node */
	new->prev = tmp;
	new->next = tmp->next;
	tmp->next->prev = new;
	tmp->next = new; /* Update next pointer of temp pointer to point new node */

	return (new);
}

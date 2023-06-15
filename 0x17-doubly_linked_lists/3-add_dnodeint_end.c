#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list
 * @head: A pointer to the head of the dlistint_t list
 * @n: The integer for the new node to contain
 *
 * Return: If the function fails - NULL or address of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	/* make a new node and assign memory for it */
	dlistint_t *new, *slow;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	/* allocate value and and following pointer of new nodes */
	new->n = n;
	new->next = NULL;
	/* set new node as head and return it, if list is empty */
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	/* Search the list for the final node */
	slow = *head;
	while (slow->next != NULL)
		slow = slow->next;
	/* add the newly added node at the end of the list */
	slow->next = new;
	new->prev = slow;

	return (new);
}

#include "lists.h"
/**
 * free_dlistint - Frees a linked dlistint_t list.
 * @head: The head of the dlistint_t list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp; /* Set up a temporary variable to hold the following node */

	while (head) /* Continue iterating until list's end head's pointer is NULL */
	{
		tmp = head->next; /* Next node is kept in the interim array */
		free(head); /* free current node */
		head = tmp; /* Select the following node using the head pointer */
	}
}

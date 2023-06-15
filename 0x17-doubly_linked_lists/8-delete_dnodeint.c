#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes a node from a dlistint_t
 *                            at a given index
 * @head: A pointer to the head of the dlistint_t
 * @index: The index of the node to delete
 * Return: Upon success - 1.
 *         Otherwise - -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--) /* Iterate until the desired index is reached */
	{
		if (tmp == NULL)
			return (-1);
		tmp = tmp->next; /* Move the temporary pointer to the next node */
	}

	if (tmp == *head) /* If the node to be deleted is the head node */
	{
		*head = tmp->next; /* Update the head pointer to point to the next node */
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else /* If the node to be deleted is not the head node */
	{
		tmp->prev->next = tmp->next;
		if (tmp->next != NULL)
			tmp->next->prev = tmp->prev;
	}

	free(tmp); /* Free the memory associated with the node to be deleted */
	return (1); /* Return 1 to indicate successful deletion */
}

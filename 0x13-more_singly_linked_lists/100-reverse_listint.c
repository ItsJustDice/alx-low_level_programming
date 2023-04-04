#include "lists.h"
/**
 * reverse_listint - Entry point
 * Description: reverses a listint_t linked list
 * @head: Integer
 * Return: pointer to first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *forward = NULL;
	/* initializes variable to NULL */
	listint_t *behind;
	/* declares without initializing */

	while (*head != NULL)
	{
		behind = (*head)->next;
		/* saves behind variable in "next" node */
		(*head)->next = forward;
		/* rescind direction of current node */
		forward = *head;
		/* shift "forward" variable to current node */
		*head = behind;
		/* shift head to next node */
	}

	*head = forward;
	/* new head is the last node refined */
	return (forward);
}

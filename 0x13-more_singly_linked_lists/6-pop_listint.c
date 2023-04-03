#include "lists.h"
/**
 * pop_listint - Entry point
 * Description: deletes head node
 * @head: Integer
 * Return: 0, should link list be empty
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int i;

	if (!*head)
	{
		return (0);
	}
	/* adress of head node in current */
	current = *head;
	/* stores data in n */
	i = current->n;
	*head = (*head)->next;
	/* frees memory of old nodes */
	free(current);

	return (i);
}

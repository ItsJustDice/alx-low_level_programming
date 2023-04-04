#include "lists.h"
/**
 * delete_nodeint_at_index - Entry point
 * Description: deletes the node at index index of a listint_t linked list
 * @head: Integer
 * @index: Integer
 * Return: 1 if successful, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int j;
	/* j is node */
	if (*head == NULL)
	{
		return (-1);
	}
	/* free memory, update head, deletion of intial node */
	if (index == 0)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
		return (1);
	}
	temp = NULL;
	current = *head;
	/* before removal node gets checked */
	/* pivot until deleted node is found */
	for (j = 0; current != NULL && j < index; j++)
	{
		temp = current;
		current = current->next;
	}
	if (current == NULL)
		return (-1);

	/* updates former node and frees memory */
	temp->next = current->next;
	free(current);
	/* return to 1 indicates success */
	return (1);
}

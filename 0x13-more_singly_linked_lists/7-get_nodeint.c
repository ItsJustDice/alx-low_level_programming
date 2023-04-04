#include "lists.h"
/**
 * get_nodeint_at_index - Entry point
 * Description: function that returns the nth node of a listint_t linked list
 * @head: Integer
 * @index: Integer
 * Return: NULL, if node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int j = 0;
	/* pivot until list ends or index is given */
	while (temp != NULL && j < index)
	{
		temp = temp->next; /*moves point to following node*/
			j++;
	}
	/*if list is empty or index might be larger than length then return to NULL*/
	if (j != index || temp == NULL)
	{
		return (NULL);
	}

	return (temp);
}

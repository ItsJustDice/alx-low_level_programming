#include "lists.h"
/**
 * free_listint2 - Entry point
 * Description: listint_t list
 * @head: Integer
 */
void free_listint2(listint_t **head)
{
	listint_t *count, *matrix;
	/* checks if head is NULL */
	if (head == NULL)
		return;

	count = *head;
	while (count != NULL)
	{
		matrix = count;
		/* move count to next node */
		count = count->next;
		/* frees memory allocated for matrix */
		free(matrix);
	}
	/* set head to NULL */
	*head = NULL;
}

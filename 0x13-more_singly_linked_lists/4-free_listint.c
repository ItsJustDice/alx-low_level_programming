#include "lists.h"
/**
 * free_listint - Entry point
 * Description: function that frees a listint_t list
 * @head: Integer
 */
void free_listint(listint_t *head)
{
	listint_t *new;
	/* alternate list, free nodes */
	while (head != NULL)
	{
		new = head;
		head = head->next;

		free(new);
	}
}

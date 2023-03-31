#include "lists.h"
/**
 * free_list - Entry point
 * Description: linked list
 * @head: pointer to the first node of the list
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *matrix;

	while (head)
	{
		matrix = head->next;
		free(head->str);
		free(head);
		head = matrix;
	}
}

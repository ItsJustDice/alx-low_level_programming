#include "lists.h"
/**
 * add_node_end - Entry point
 * Description: adds a node at the end of the linked list
 * @head: pointer to the first node of the list
 * @str: string to add
 * Return: NULL if it fails / starting addr of the list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *matrix, *temp;

	if (!head)
		return (NULL);

	matrix = malloc(sizeof(list_t));
	if (!matrix)
		return (NULL);
	matrix->str = strdup(str);
	if (!matrix->str)
	{
		free(matrix);
		return (NULL);
	}

	matrix->len = strlen(str);
	matrix->next = NULL;

	if (!*head)
	{
		*head = matrix;
		return (matrix);
	}

	temp = *head;

	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = matrix;
	return (matrix);
}

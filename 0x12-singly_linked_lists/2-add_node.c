#include "lists.h"
/**
 * add_node - Entry point
 * Description: adds a node at the beginning of the linked list
 * @head: pointer to the first node of the list
 * @str: string to add to new node in the list
 * Return: NULL if it fails / starting addr of the list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	int len;

	node = malloc(sizeof(list_t));
	if (!node)
	{
		return (NULL);
	}
	node->str = strdup(str);
	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}
	/* number of characters within square brackets */
	len = 0;
	while (str[len])
		len++;

	node->next = *head;
	node->len = len;

	*head = node;

	return (node);
}

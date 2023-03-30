#include "lists.h"
/**
 * add_node_end - adds a node at the end of the linked list
 * @head: pointer to the first node of the list
 * @str: string to add
 * Return: NULL if it fails / starting addr of the list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *_node, *temp;
	size_t str_len = 0;

	/*set strig length to 0 if its NULL*/
	if (str == NULL)
		str_len = 0;

	/*count length of string*/
	while (str[str_len] != '\0')
		str_len++;

	_node = malloc(sizeof(list_t));
	if (_node == NULL)
		return (NULL);

	_node->str = strdup(str);
	_node->len = str_len;
	_node->next = NULL;

	/*copy our starting node pointer to temp*/
	temp = *head;

	/*if temp is NULL place our new_node at the beginning of the list*/
	/*else if its not null we place our _node to temp->next hence*/
	/*adding our _node at the end of the list*/
	if (temp == NULL)
		*head = _node;
	else
	{
		/**
		 * we iterate pointer next addr if its not NULL our temp addr
		 * points to the next addr or the next node.
		 */
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = _node;
	}

	return (*head);
}

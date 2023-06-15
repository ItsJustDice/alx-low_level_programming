#include "lists.h"
/**
 * get_dnodeint_at_index - Locates a node in a dlistint_t list
 * @head: The head of the dlistint_t list
 * @index: The node to locate
 * Return: If the node does not exist - NULL or address of the located node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--) /* repeat this procedure up to required index */
	{
		if (head == NULL)
			return (NULL); /* If head is NULL before reaching index, return NULL  */
		/* indicating index is out of range */
		head = head->next; /* shift head pointer to following node */
	}

	return (head); /* return the node at the desired index */
}

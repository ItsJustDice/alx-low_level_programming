#include "lists.h"
/**
 * list_len - Entry point
 * Description: returns the number of elements
 * @h: pointer to the head (first node)
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}

	return (nodes);
}
